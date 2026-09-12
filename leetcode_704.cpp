// Binary Search
#include<iostream>
#include<vector>
using namespace std;
// using recursion
class Solution {
public:
    int bs(vector<int>& nums, int start, int end, int target){
        if(start>end) return -1;
        int mid = start + (end-start)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return bs(nums, mid+1, end, target);
        else return bs(nums, start, mid-1, target);
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;
        return bs(nums, start, end, target);
        
    }
};

// // using iteration

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int low = 0;
//         int high = nums.size() - 1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] < target)
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }

//         return -1;
//     }
// };
