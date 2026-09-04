#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j=0, k;
        int n = nums.size();
        for(i=0; i<n; i++){
            if(nums[i]!=0){
                k = nums[j];
                nums[j] = nums[i];
                nums[i] = k;
                j++;
            }
        }
    }
};