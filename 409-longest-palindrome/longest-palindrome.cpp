class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto& [ch, freq] : count) {
            length += (freq / 2) * 2;
            if (freq % 2 == 1) {
                hasOdd = true;
            }
        }

        if (hasOdd) length += 1;  

        return length;
    }
};
