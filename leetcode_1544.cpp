// Make The String Great
#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;


// Using Stack
class Solution {
public:
    string makeGood(string s) {
        if(s.size() == 0 ||s.size() == 1) return s;
        stack<char> st;
        for (char ch : s) {
            if (!st.empty() && abs(st.top() - ch) == 32) {
                st.pop();
            } else {
                st.push(ch);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


// Using string
class Solution {
public:
    string makeGood(string s) {
        string ans = "";

        for (char ch : s) {
            if (!ans.empty() && abs(ans.back() - ch) == 32) {
                ans.pop_back();
            } else {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};