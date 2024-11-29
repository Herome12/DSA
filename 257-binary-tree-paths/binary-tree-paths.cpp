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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;

        // Base case: if root is NULL, return an empty vector
        if (root == NULL) return paths;

        // Leaf node: return the single path as a string
        if (root->left == NULL && root->right == NULL) {
            paths.push_back(to_string(root->val));
            return paths;
        }

        // Recursive case: get paths from left and right subtrees
        vector<string> leftPaths = binaryTreePaths(root->left);
        vector<string> rightPaths = binaryTreePaths(root->right);

        // Prepend the current node's value to each path and add to result
        for (string path : leftPaths) {
            paths.push_back(to_string(root->val) + "->" + path);
        }
        for (string path : rightPaths) {
            paths.push_back(to_string(root->val) + "->" + path);
        }

        return paths;
    }
};
