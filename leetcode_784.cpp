// Letter Case Permutation
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> ans;

    void solve(string &s, int idx) {

        if(idx == s.size()) {
            ans.push_back(s);
            return;
        }

        if(isalpha(s[idx])) {
            char original = s[idx];

            // Lowercase
            s[idx] = tolower(s[idx]);
            solve(s, idx + 1);

            // uppercase
            s[idx] = toupper(s[idx]);
            solve(s, idx + 1);

            // Restore original character
            s[idx] = original;
        }
        else {
            solve(s, idx + 1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        ans.clear();
        solve(s, 0);
        return ans;
    }
};