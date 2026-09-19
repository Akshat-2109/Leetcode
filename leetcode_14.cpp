// Longest Common Prefix
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];

        for (int i = 0; i < strs[0].size(); i++) {
            for (int j = 0; j + 1 < strs.size(); j++) {
                if (i >= strs[j].size() || i >= strs[j+1].size() || strs[j][i] != strs[j+1][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};



// // 2nd Method


// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";
//         for (int i = 0; i < strs[0].size(); i++) {
//             char c = strs[0][i];
//             for (int j = 1; j < strs.size(); j++) {
//                 if (i == strs[j].size() || strs[j][i] != c) {
//                     return strs[0].substr(0, i);
//                 }
//             }
//         }
//         return strs[0];
//     }
// };