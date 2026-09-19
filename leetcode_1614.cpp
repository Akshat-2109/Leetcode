// Maximum Nesting Depth of the Parentheses
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int count = 0, max_count = 0;
        for(char c : s){
            if(c == '(') {
                count++;
                if(count>max_count) max_count = count;
            }
            else if(c == ')') count--;
            else continue;
        }
        return max_count;
    }
};