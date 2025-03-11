class Solution {
public:
    string removeStars(string s) {
        std::stack<char> st;

        for (char c : s) {
            if (c == '*') {
                if (!st.empty()) {
                    st.pop(); // Remove the last added character
                }
            } else {
                st.push(c); // Push normal characters
            }
        }

        // Build the resulting string from the stack
        std::string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // Since the stack stores characters in reverse order, reverse the result
        std::reverse(result.begin(), result.end());

        return result;
    }
};
