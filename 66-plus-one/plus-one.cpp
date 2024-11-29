class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the last digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1;  // No carry needed, just add 1 and return
                return digits;
            }
            digits[i] = 0;  // Set the current digit to 0 if carry is needed
        }
        
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
