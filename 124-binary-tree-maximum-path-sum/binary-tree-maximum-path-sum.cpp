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
int maxDepth(TreeNode* root,int &maxsum) {
        if(root==NULL) return 0;
        int left=max(0,maxDepth(root->left, maxsum));
        int right=max(0,maxDepth(root->right,maxsum));
        maxsum=max(maxsum,root->val+left+right);
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
       int maxsum=INT_MIN;
        maxDepth(root,maxsum);
        return maxsum;
    }
};