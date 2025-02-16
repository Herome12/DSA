class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums; // Temporary vector for merging

        // Push only the first m elements of nums1
        for (int i = 0; i < m; i++) {
            nums.push_back(nums1[i]);
        }

        // Push only the n elements of nums2
        for (int i = 0; i < n; i++) {
            nums.push_back(nums2[i]);
        }

        // Sort the merged elements
        sort(nums.begin(), nums.end());

        // Copy sorted elements back to nums1
        for (int i = 0; i < nums.size(); i++) {
            nums1[i] = nums[i];
        }
    }
};
