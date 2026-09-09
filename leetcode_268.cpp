// Missing Number
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int s2=0;
        for(int i : nums){
            s2 += i;
        } 
        return sum - s2;
    }
};