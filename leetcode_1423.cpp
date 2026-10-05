// Maximum Points You Can Obtain from Cards
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0, n = cardPoints.size();
        for(int i = 0; i < k; i++){
            sum += cardPoints[i];
        }
        int ans = sum;
        for(int i = 0; i < k; i++){
            sum -= cardPoints[k-1-i];
            sum += cardPoints[n-1-i];
            ans = max(ans,sum);
        }
        return ans;
    }
};