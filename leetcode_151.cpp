// Reverse Words in a String
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while(ss >> word){
            words.push_back(word);
        }
        string answer;
        for(int i = words.size()-1; i >= 0; i--){
            answer += words[i];
            if(i!=0) answer +=" ";
        }
        return answer;
    }
};