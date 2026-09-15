// Search in Rotated Sorted Array II
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, n = nums.size(), right = n - 1;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target) return true;
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            else if(nums[left]<=nums[mid]){
                if (target<nums[mid] && target>=nums[left]) right = mid-1;
                else left = mid+1;
            
            }else{
                if(target>nums[mid] && target <=nums[right]) left = mid + 1;
                else right = mid-1;
            }
        }
        return false;
    }
};