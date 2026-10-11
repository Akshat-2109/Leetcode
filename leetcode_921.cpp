// Minimum Add to Make Parentheses Valid
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans = 0;
        for(char c : s){
            if(c == '(') count++;
            else{
                if(count>0) count--;
                else ans++;
            }
        }
        return count + ans;;
    }
};