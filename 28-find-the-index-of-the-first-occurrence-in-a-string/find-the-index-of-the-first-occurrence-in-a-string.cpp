class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();

        // Edge case: if the needle is empty, return 0
        if (n == 0) return 0;

        for (int i = 0; i <= h - n; i++) { // Ensure no out-of-bounds access
            bool match = true; // Assume a match initially
            for (int j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j]) { // Compare characters
                    match = false; // Mark as not a match
                    break;         // Exit inner loop early
                }
            }
            if (match) return i; // If all characters match, return index
        }

        return -1; // If no match is found
    }
};
