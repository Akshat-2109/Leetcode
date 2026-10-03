// Find All Anagrams in a String
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqWindow(26, 0);

        int len = p.size();

        // p ki frequency
        for (char c : p) {
            freqP[c - 'a']++;
        }

        // First window
        for (int i = 0; i < len; i++) {
            freqWindow[s[i] - 'a']++;
        }

        // Sliding window
        for (int i = 0; i <= s.size() - len; i++) {

            if (freqWindow == freqP) {
                ans.push_back(i);
            }

            // Current window se left character remove
            freqWindow[s[i] - 'a']--;

            // Next window mein right character add
            if (i + len < s.size()) {
                freqWindow[s[i + len] - 'a']++;
            }
        }

        return ans;
    }
};
