class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        int result = 0;

        for (int i = 0; i < n; ++i) {
            int next = (i + 1) % n; 
            int diff = abs(nums[i] - nums[next]);
            result = max(result, diff);
        }

        return result;
    }
};
