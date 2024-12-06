#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                // Push opening brackets onto the stack
                st.push(ch);
            } else {
                // For closing brackets
                if (st.empty()) return false; // No matching opening bracket
                
                char top = st.top();
                st.pop();
                
                // Check if the top matches the current closing bracket
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // If the stack is empty, all brackets are matched
        return st.empty();
    }
};
