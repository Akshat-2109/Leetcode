// Sum of Subarray Ranges
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int maxi = nums[i];
            int mini = nums[i];

            for (int j = i; j < n; j++) {
                if (nums[j] > maxi) {
                    maxi = nums[j];
                }

                if (nums[j] < mini) {
                    mini = nums[j];
                }

                sum = sum + (maxi - mini);
            }
        }

        return sum;
    }
};