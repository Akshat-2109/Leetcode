// Koko Eating Bananas
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Using brute force(not aaccepted on leetcode)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long k = 1;
        while(true){
            int hour = 0;
            for(int pile : piles){
                hour += (pile + k - 1) / k;
            }
            if(hour<=h) return k;

            k++;
        }
    }
};



// Using binary search
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int k = low + (high - low) / 2;

            long long hours = 0;

            for (int pile : piles) {
                hours += (pile + k - 1) / k;
            }

            if (hours <= h)
                high = k;
            else
                low = k + 1;
        }

        return low;
    }
};
