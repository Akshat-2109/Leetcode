// Minimum Moves to Equal Array Elements II
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int req = nums[n/2];
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += abs(nums[i] - req);
        }
        return ans;
    }
};