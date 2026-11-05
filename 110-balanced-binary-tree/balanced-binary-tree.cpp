/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int lh = 1 + maxDepth(root->left);
        int rh = 1 + maxDepth(root->right);
        return max(lh, rh);
    }
    bool isBalan(TreeNode* root) {
        if (root == NULL)
            return true;
        int letfi = maxDepth(root->left);
        int righti = maxDepth(root->right);
        if (abs(letfi - righti) < 2)
            return true;
        else
            return false;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
        return isBalan(root)&&
               isBalanced(root->left) && isBalanced(root->right);
    }
};