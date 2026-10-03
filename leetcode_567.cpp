// Permutation in String
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string st;
        int left = 0, len = s1.size();
        sort(s1.begin(), s1.end());
        if (s1.size() > s2.size())
            return false;
        for(int i = 0; i <= s2.size() - s1.size(); i++){
            st = s2.substr(i, len);
            sort(st.begin(), st.end());
            if(st == s1) return true;
        }
        return false;
    }
};