// Contains Duplicate II
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> hp;
        for(int i = 0; i < nums.size(); i++){
            hp[nums[i]].push_back(i);
            vector<int>& vt = hp[nums[i]];

            if (vt.size() >= 2) {
                int n = vt.size();

                if (vt[n - 1] - vt[n - 2] <= k)
                    return true;
            }
        }
        return false;
    }
};