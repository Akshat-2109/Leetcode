// Find Lucky Integer in an Array
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i : arr){
            mp[i]++;
        }
        int ans = -1;
        for(auto i : mp){
            if(i.first == i.second){
                ans = max(ans, i.first);
            }
        }
        return ans;
    }
};