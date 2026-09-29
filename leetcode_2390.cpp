// Removing Stars From a String
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[j] != '*'){
                s[i] = s[j];
                i++;
            }
            else{
                i--;
            }
        }
        return s.substr(0, i);
    }
};