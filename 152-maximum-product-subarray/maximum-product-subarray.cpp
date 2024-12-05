class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = nums[0];
        int currMax = 1;
        int currMin = 1;

        for (int i = 0; i < n; i++) {
            // If current element is negative, swap currMax and currMin
            if (nums[i] < 0) {
                swap(currMax, currMin);
            }

            // Calculate the current max and min products
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);

            // Update the global maximum product
            maxProduct = max(maxProduct, currMax);
        }

        return maxProduct;
    }
};
