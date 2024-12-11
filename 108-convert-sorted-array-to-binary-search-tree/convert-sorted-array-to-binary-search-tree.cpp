/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* helper(vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr; // Base case: no elements to form a subtree
        }
        
        int mid = left + (right - left) / 2; // Find the middle index
        TreeNode* root = new TreeNode(nums[mid]); // Create the root node with the middle element

        // Recursively build the left and right subtrees
        root->left = helper(nums, left, mid - 1);
        root->right = helper(nums, mid + 1, right);

        return root; // Return the root node
    }
};
