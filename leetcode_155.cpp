// Min Stack
#include<iostream>
#include<stack>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(minSt.empty() || value <= minSt.top()) minSt.push(value);
    }
    
    void pop() {
        if(minSt.top() == st.top()) minSt.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
