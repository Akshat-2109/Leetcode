// Height checker
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        for(int i : heights){
            arr.push_back(i);
        }
        sort(heights.begin(), heights.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != arr[i]) count++;
        }
        return count;
    }
};