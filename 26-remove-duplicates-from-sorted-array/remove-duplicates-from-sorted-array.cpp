class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> result;

        // Insert elements into set to remove duplicates
        for (int i = 0; i < nums.size(); i++) {
            result.insert(nums[i]);
        }

        // Clear original vector and re-insert unique elements
        nums.clear();
        for (int val : result) {
            nums.push_back(val);
        }

        return nums.size(); // Return number of unique elements
    }
};
