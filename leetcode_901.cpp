// Online Stock Span
#include<iostream>
#include <stack>
using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> st;
    int day;

    StockSpanner() {
        day = 0;
    }

    int next(int price) {
        day++;

        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }

        int span;

        if (st.empty()) {
            span = day;
        } else {
            span = day - st.top().second;
        }

        st.push({price, day});

        return span;
    }
};