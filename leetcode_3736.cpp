// Minimum Moves to Equal Array Elements III
#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            maxi = max(nums[i], maxi);
        }

        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += (maxi - nums[i]);
        }
        return ans;
    }
};