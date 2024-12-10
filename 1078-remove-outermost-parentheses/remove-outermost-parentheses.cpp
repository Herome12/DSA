class Solution {
public:
    string removeOuterParentheses(string s) {
        int openCount = 0; // Keeps track of open parentheses
        string result = "";

        for (char ch : s) {
            if (ch == '(') {
                if (openCount > 0) { 
                    // Add '(' if it's not an outer parenthesis
                    result += ch;
                }
                openCount++;
            } else if (ch == ')') {
                openCount--;
                if (openCount > 0) { 
                    // Add ')' if it's not an outer parenthesis
                    result += ch;
                }
            }
        }

        return result;
    }
};
