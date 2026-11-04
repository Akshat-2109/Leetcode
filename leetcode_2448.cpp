// Minimum Cost to Make Array Equal
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        long long total = 0;

        for(int i = 0; i < n; i++){
            arr.push_back({nums[i], cost[i]});
            total += cost[i];
        }
        sort(arr.begin(), arr.end());

        long long sum = 0;
        int target = 0;

        for(auto &p : arr) {
            sum += p.second;

            if(sum > total / 2) {
                target = p.first;
                break;
            }
        }

        long long ans = 0;
        for(int i = 0; i < n; i++){
            ans += 1LL * abs(nums[i] - target) * cost[i];
        }
        return ans;
    }
};