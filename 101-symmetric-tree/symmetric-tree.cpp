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
bool issymm(TreeNode* rootleft,TreeNode* rootright){
    if(rootleft==NULL||rootright==NULL)
    return rootleft==rootright;
    return (rootleft->val==rootright->val)&&issymm(rootleft->left,rootright->right)&&issymm(rootleft->right,rootright->left);
    
}
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            // An empty tree is
            // considered symmetric
            return true;
        }
        return issymm(root->left,root->right);
    }
};