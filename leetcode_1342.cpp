// Number of Steps to Reduce a Number to Zero
#include<iostream>
using namespace std;

class Solution {
public:
    int count = 0;
    void odd(int numb){
        numb -= 1;
        count++;
        if(numb == 0) return;
        else if(numb % 2 == 0) even(numb);
        else odd(numb);
    }
    void even(int numb){
        numb = numb/2;
        count++;
        if(numb == 0) return;
        else if(numb % 2 == 0) even(numb);
        else odd(numb);
    }
    int numberOfSteps(int num) {
        count = 0;
        if(num == 0) return count;
        else if(num % 2 == 0) even(num);
        else odd(num);
        return count;
    }
};