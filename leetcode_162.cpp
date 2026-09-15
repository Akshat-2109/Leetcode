// Find Peak Element
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, n = nums.size(), right = n - 1;
        while(left<right){
            int mid = left + (right - left)/2;
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        return left;
    }
};