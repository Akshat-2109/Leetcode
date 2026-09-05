// Remove Duplicates from Sorted Array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k=0, i;
        for(i=1; i<n; i++){
            if(nums[i]!=nums[k]){
                nums[k+1]=nums[i];
            k++;
            }
        }
        return k+1;
    }
};