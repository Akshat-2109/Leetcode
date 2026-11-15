// Subsets II
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
public:
    set<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& nums, int idx){
        if(idx == nums.size()){
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[idx]);
        solve(nums, idx + 1);

        temp.pop_back();

        solve(nums, idx + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        ans.clear();
        temp.clear();

        solve(nums, 0);

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};