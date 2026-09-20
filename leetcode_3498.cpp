// This function calculates the "reverse degree" of a string.
// The reverse degree is defined as the sum of the positions of each character
// in the reversed alphabet ('z' = 1, 'y' = 2, ..., 'a' = 26) multiplied by its 1-based index in the string.
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int reversePos = 0;
        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            reversePos = 'z' - s[i] + 1;
            ans = ans + reversePos * (i+1);
        }
        return ans;
    }
};