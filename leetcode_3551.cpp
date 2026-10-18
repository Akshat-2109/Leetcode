// Minimum Swaps to Sort by Digit Sum
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        unordered_map<int, int> hmp;
        
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int sum = 0;
            while(num>0){
                sum += num % 10;
                num /= 10;
            }
            hmp[nums[i]] = sum;
        }

        vector<int> arr = nums;
        sort(arr.begin(), arr.end(), [&] (int a, int b){
            if(hmp[a] == hmp[b]) return a < b;

            return hmp[a] < hmp[b];
        });

        unordered_map<int, int> pos;
        for(int i = 0; i < arr.size(); i++){
            pos[arr[i]] = i;
        }

        unordered_map<int, int> new_pos;

        for (int i = 0; i < arr.size(); i++) {
            new_pos[arr[i]] = i;
        }

        int swaps = 0;
        vector<int> temp = nums;

        for (int i = 0; i < temp.size(); i++) {
            while (temp[i] != arr[i]) {
                int correctPos = new_pos[temp[i]];

                swap(temp[i], temp[correctPos]);
                swaps++;
            }
        }

        return swaps;
    }
};