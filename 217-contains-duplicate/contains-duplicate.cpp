class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) { // Check adjacent elements
                return true;
            }
        }
        return false; // No duplicates found
    }
};
