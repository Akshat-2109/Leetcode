// Check if All A's Appears Before All B's
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b'){
                for(int j = i; j < s.size(); j++){
                    if(s[j] == 'a') return false;
                }
            }
        }
        return true;
    }
};