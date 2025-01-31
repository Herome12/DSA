class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;  // To store the length of the longest substring
        unordered_set<char> seen;  // Set to track characters in the current window
        int i = 0;  // Left pointer of the window
        
        for (int j = 0; j < s.size(); j++) {
            // If the character is already in the set, shrink the window from the left
            while (seen.count(s[j])) {
                seen.erase(s[i]);  // Remove character at index i
                i++;  // Move left pointer to the right
            }
            
            // Add the current character to the set
            seen.insert(s[j]);
            
            // Calculate the length of the current window and update the maximum length
            len = max(len, j - i + 1);
        }
        
        return len;
    }
};
