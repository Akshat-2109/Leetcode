// Rotate String
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        string doub = s + s;
        for(int i = 0; i <= s.size(); i++){
            if(doub.substr(i, goal.size()) == goal) return true;
        }
        return false;
    }
};