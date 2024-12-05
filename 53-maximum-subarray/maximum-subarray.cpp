class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxi = nums[0]; // Initialize with the first element

        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
            maxi = max(maxi, sum); // Update maxi with the maximum value
            if (sum < 0) {
                sum = 0; // Reset sum if it goes negative
            }
        }

        return maxi;
    }
};
