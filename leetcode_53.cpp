// Maximum Subarray
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int high_sum = nums[0];
        int current_sum = 0;

        for(int num : nums){
            current_sum += num;

            if(current_sum>high_sum){
                high_sum = current_sum;
            }
            if(current_sum<0){
                current_sum = 0;
            }
        }
        return high_sum;

    }

};