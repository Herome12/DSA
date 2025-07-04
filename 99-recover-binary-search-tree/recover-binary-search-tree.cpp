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
    TreeNode* first = nullptr;  
    TreeNode* second = nullptr; 
    TreeNode* prev = nullptr;  
    void recoverTree(TreeNode* root) {
        if(root==NULL) return;

        inorder(root);

        swap(first->val,second->val);

    } 
    void inorder(TreeNode* node){
        if(!node) return;

        inorder(node->left);

        if(prev&&node->val<prev->val){
            if(!first) first = prev;
            second = node;
        }

        prev = node;

        inorder(node->right);
    }
};