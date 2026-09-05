// Best Time to Buy and Sell Stock
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0, mini = prices[0];
        for(int i = 1; i<n; i++){
            mini = min(mini, prices[i]);
            profit = max(profit, prices[i]-mini);
        }
        return profit;
    }
};