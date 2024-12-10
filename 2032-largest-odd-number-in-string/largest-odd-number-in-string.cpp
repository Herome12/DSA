class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        
        // Iterate from the last character to the first character
        for (int i = n - 1; i >= 0; i--) {
            // Check if the current digit is odd
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the beginning up to and including this character
                return num.substr(0, i + 1);
            }
        }
        
        // If no odd digit is found, return an empty string
        return "";
    }
};
