class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 0) return 0;  // Handle empty string case
        vector<int> dp(n + 1);
        dp[0] = 1;  // Base case: one way to decode an empty string
        dp[1] = s.at(0) == '0' ? 0 : 1;  // If the first character is '0', no valid decoding

        for (int i = 2; i <= n; i++) {
            int oneDigit = stoi(s.substr(i - 1, 1));  // Last single digit
            int twoDigit = stoi(s.substr(i - 2, 2));  // Last two digits

            if (oneDigit >= 1) {
                dp[i] += dp[i - 1];  // Add ways for valid single digit
            }

            if (twoDigit >= 10 && twoDigit <= 26) {
                dp[i] += dp[i - 2];  // Add ways for valid two digits
            }
        }

        return dp[n];  // Return the number of decodings for the entire string
    }
};
