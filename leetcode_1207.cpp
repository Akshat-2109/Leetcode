
#include<iostream>
#include<vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequency;
        for(int i : arr){
            frequency[i]++;
        }
        unordered_set<int> check;
        for(auto &it : frequency){
            if(check.count(it.second)){
                return false;
            }
            check.insert(it.second);
        }
        return true;
    }
};