class Solution {
public:
    // Helper function to check if a string is a palindrome
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string result = "";

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j)) {
                    if (j - i + 1 > result.length()) {
                        result = s.substr(i, j - i + 1);
                    }
                }
            }
        }

        return result;
    }
};
