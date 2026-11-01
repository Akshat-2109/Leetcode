// Minimum Moves to Equal Array Elements
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int k = nums.size();
        int mini = INT_MAX;

        for(int i = 0; i < k; i++){
            mini = min(nums[i], mini);
        }

        int move = 0, num;
        for(int i = 0; i < k; i++){
            num = nums[i] - mini;
            move += num;
        }
        return move;
    }
};