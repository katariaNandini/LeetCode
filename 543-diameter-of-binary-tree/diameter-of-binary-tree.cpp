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
int maxi=INT_MIN;
 int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        int ans=lh+rh;
        maxi=max(ans,maxi);
        return max(lh,rh)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int depth=maxDepth(root);
        return maxi;
    }
};