// Find the Distance Value Between Two Arrays
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// using brute force
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i = 0; i < arr1.size(); i++){
            for(int j = 0; j < arr2.size(); j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    break;
                }
                if(j == arr2.size() - 1) count++;
            }
        }
        return count;
    }
};

// using sorting

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int count = 0;

        for (int x : arr1) {
            auto it = lower_bound(arr2.begin(), arr2.end(), x - d);

            if (it == arr2.end() || *it > x + d) {
                count++;
            }
        }

        return count;
    }
};
