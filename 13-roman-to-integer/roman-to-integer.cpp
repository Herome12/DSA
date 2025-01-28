class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;

        // Initialize Roman numeral characters
        char I = 'I', V = 'V', X = 'X', L = 'L', C = 'C', D = 'D', M = 'M';

        for (int i = 0; i < s.size(); ++i) {
            char str = s[i];
            
            // Check for subtractive cases
            if (i + 1 < s.size() && 
                ((str == I && (s[i + 1] == V || s[i + 1] == X)) ||
                 (str == X && (s[i + 1] == L || s[i + 1] == C)) ||
                 (str == C && (s[i + 1] == D || s[i + 1] == M)))) {
                // Subtract current value
                if (str == I) sum -= 1;
                else if (str == X) sum -= 10;
                else if (str == C) sum -= 100;
            } else {
                // Add current value
                if (str == I) sum += 1;
                else if (str == V) sum += 5;
                else if (str == X) sum += 10;
                else if (str == L) sum += 50;
                else if (str == C) sum += 100;
                else if (str == D) sum += 500;
                else if (str == M) sum += 1000;
            }
        }
        return sum;
    }
};
