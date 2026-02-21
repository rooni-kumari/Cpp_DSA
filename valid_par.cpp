#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mapping = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char ch : s) {
            // If opening bracket
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // If closing bracket
            else if (mapping.count(ch)) {
                if (st.empty() || st.top() != mapping[ch]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};