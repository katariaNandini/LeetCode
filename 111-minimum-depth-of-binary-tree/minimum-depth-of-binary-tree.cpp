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
    int mini = INT_MAX;
    void md(TreeNode* root, int d) {
        if (root == NULL)
            return;
        if (root->left != NULL)
            md(root->left, 1 + d);
        if (root->right != NULL)
            md(root->right, 1 + d);
        if (root->left == NULL && root->right == NULL) {
            mini = min(mini, d);
        }
        return;
    }
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        if (root->left != NULL)
            md(root->left, 2);
        if (root->right != NULL)
            md(root->right, 2);
        return mini;
    }
};