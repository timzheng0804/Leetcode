/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool compare(TreeNode* left, TreeNode* right) {
        if (!left || !right) return left == right;
        return left->val == right->val && 
            compare(left->left, right->right) && compare(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return compare(root->left, root->right);
    }
};