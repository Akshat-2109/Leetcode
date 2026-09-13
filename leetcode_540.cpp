// Single Element in a Sorted Array
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int mid, left = 0, right = nums.size()-1;
        while(left<right){
            mid = left + (right - left)/2;
            if(mid % 2 == 1){
                mid--;
            }
            if(nums[mid] == nums[mid+1]) left = mid+2;
            else right = mid;
        }
        return nums[left];
    }
};