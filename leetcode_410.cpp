// Split Array Largest Sum
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
private:
    // Helper function to check if a split with given maxSum is possible
    bool isPossible(const vector<int>& nums, int k, long long maxSum) {
        int count = 1; // Start with 1 subarray
        long long currentSum = 0;

        for (int num : nums) {
            if (currentSum + num <= maxSum) {
                currentSum += num;
            } else {
                // Start a new subarray
                count++;
                currentSum = num;
            }
        }

        return count <= k; // Valid if subarrays needed are <= k
    }

public:
    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (isPossible(nums, k, mid)) {
                ans = mid;     // Try to find a smaller possible maximum sum
                high = mid - 1;
            } else {
                low = mid + 1; // Increase allowed sum
            }
        }

        return ans;
    }
};