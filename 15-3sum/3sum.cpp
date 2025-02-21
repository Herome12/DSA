class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans2;
        int target = 0;

        sort(nums.begin(), nums.end()); // Sorting helps in duplicate removal

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate elements

            int left = i + 1, right = nums.size() - 1; // Two-pointer approach

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == target) {
                    ans2.push_back({nums[i], nums[left], nums[right]});

                    // Move `left` and `right` to avoid duplicates
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < target) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }
        return ans2;
    }
};
