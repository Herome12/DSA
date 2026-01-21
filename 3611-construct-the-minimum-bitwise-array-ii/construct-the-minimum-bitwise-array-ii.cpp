class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            // If x is even, no valid answer
            if ((x & 1) == 0) {
                ans[i] = -1;
                continue;
            }

            // Find first 0 bit from bit 1 (skip LSB)
            int value = -1;
            for (int bit = 1; bit < 32; bit++) {
                if (((x >> bit) & 1) == 0) {
                    // Flip bit at (bit-1)
                    value = x ^ (1 << (bit - 1));
                    break;
                }
            }
            ans[i] = value;
        }

        return ans;
    }
};
