// Baseball Game
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int a = st.top();
                st.pop();

                int b = st.top();

                st.push(a);

                st.push(a+b);
            }

            else if(operations[i] == "D") st.push(2 * st.top());

            else if(operations[i] == "C") st.pop();

            else{
                st.push(stoi(operations[i]));
            }
        }

        int score = 0;
        
        while(!st.empty()){
            score += st.top();
            st.pop();
        }

        return score;
    }
};