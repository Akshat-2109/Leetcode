// Contains Duplicate
#include<iostream>
#include<unordered_map>
#include<vector>
#include<unordered_set>
using namespace std;

// using unordered map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hp;
        for(int i : nums){
            hp[i]++;
            if(hp[i] >= 2){
                return true;
            }
        }
        // for(auto it : hp){
        //     if(it.second >= 2) return true;
        // }
        return false;
    }
};


// using unordered set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int x : nums) {
            if (st.count(x))
                return true;

            st.insert(x);
        }

        return false;
    }
};
