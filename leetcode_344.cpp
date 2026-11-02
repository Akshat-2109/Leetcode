// Reverse String
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// using reverse function
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

// using two pointer
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};

// using recursion
class Solution {
public:
    void reverse(vector<char>& s) {
        solve(s, 0, s.size() - 1);
    }

    void solve(vector<char>& s, int l, int r) {
        if(l >= r) return;

        swap(s[l], s[r]);

        solve(s, l + 1, r - 1);
    }
};