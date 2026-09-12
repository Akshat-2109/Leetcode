// Find First and Last Position of Element in Sorted Array
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int first_pos(vector<int>& nums, int target){
        int left = 0, right = nums.size()-1;
        int ans = -1;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                ans = mid;
                right = mid-1;
            }else if(nums[mid]<target) left = mid+1;
            else right = mid-1;
        }
        return ans;
    }
    int last_pos(vector<int>& nums, int target){
        int left = 0, right = nums.size()-1;
        int ans=-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                ans = mid;
                left = mid+1;
            }else if(nums[mid]<target) left = mid+1;
            else right = mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = first_pos(nums, target);
        int last = last_pos(nums, target);
        return{first,last};
    }
};