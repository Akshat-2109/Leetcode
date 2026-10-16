// Maximum Gap
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            int maxi = nums[(i+1)%n] - nums[i];
            ans = max(ans, maxi);
        }
        return ans;
    }
};