// Generate Parentheses
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
        vector<string> ans;
        void solve(string temp, int open, int close, int n){
            if(temp.size() == 2 * n){
                ans.push_back(temp);
                return;
            }
            if(open < n){
                temp.push_back('(');
                solve(temp, open+1, close, n);
                temp.pop_back();
            }
            if(close < open){
                temp.push_back(')');
                solve(temp, open, close+1, n);
                temp.pop_back();
            }
        }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        solve("", 0, 0, n);
        return ans;
    }
};