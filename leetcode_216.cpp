// Combination Sum III
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(int start, int k, int n){
        if(temp.size() == k && n == 0){
            ans.push_back(temp);
            return;
        }
        if(k <= temp.size() || n <= 0) return;
        while(start <= 9){
            temp.push_back(start);
            solve(start + 1, k, n - start);
            temp.pop_back();
            start++;
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        temp.clear();
        solve(1, k, n);

        return ans;
    }
};