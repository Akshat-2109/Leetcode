// Power of Two
#include<iostream>
using namespace std;

// using bit manipulation
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n > 0 && (n & (n-1)) == 0) return true;
        return false;
    }
};

// 2nd way to write
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 0) return false;
        return (n & (n-1)) == 0;
    }
};

// without bit manipulation
#include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int power;
        for(int i = 0; i <= 32; i++){
            power = pow(2, i);
            if(n == power) return true;
            if(n < power) return false;
        }
        return false;
    }
};