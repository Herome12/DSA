class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) return "";  // Handle empty input

        // Start with the first string as the prefix
        string prefix = strs[0];

        // Compare the prefix with each string
        for (int i = 1; i < n; ++i) {
            // Reduce the prefix until it matches the current string
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1); // Remove the last character
                if (prefix.empty()) return ""; // No common prefix
            }
        }
        return prefix;
    }
};
