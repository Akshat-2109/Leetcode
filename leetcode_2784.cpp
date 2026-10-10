// Check if Array is Good
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> freq(n+1, 0);

        for(int i : nums){
            if(i<1 || i>n) return false;
            freq[i]++;
        }

        for(int i = 1; i < n; i++){
            if(freq[i] != 1) return false;
        }

        return freq[n] == 2;
    }
};