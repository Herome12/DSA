#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;         // Pointer to traverse the string
        int n = s.size();
        int sign = 1;      // To track the sign of the number
        long result = 0;   // To store the final result (use long for overflow handling)

        // Step 1: Skip leading whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Handle optional sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert digits to integer
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Step 4: Handle overflow and underflow
            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;

            i++;
        }

        // Step 5: Return the result with the correct sign
        return (int)(result * sign);
    }
};
