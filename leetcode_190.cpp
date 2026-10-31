// Reverse Bits
#include<iostream>
#include<string>
#include<algorithm>
#include <bitset>
using namespace std;

// using string
class Solution {
public:
    int reverseBits(int n) {
        string bin = bitset<32>(n).to_string();
        reverse(bin.begin(), bin.end());
        int rev = bitset<32>(bin).to_ulong();
        return rev;
    }
};

// Bit Manipulation
class Solution {
public:
    int reverseBits(int n) {
        unsigned int ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (n & 1);
            n >>= 1;
        }

        return ans;
    }
};