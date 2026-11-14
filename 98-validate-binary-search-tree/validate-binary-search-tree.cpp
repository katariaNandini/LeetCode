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
bool bst(TreeNode * root,long small,long big){
    if(root==NULL) return true;
    //  small=min(small,root->val);
    //  big=max(big,root->val);
     cout<<"left  "<< small<<"big   "<<big<<endl;
        if(root->val <= small || root->val >= big)
            return false;

    bool lefti=true;
    bool righti=true;
if(root->left)
  lefti=  bst(root->left,small,root->val);
if(root->right)
righti=bst(root->right,root->val,big);
return righti && lefti;
}
    bool isValidBST(TreeNode* root) {
   
return bst(root,LONG_MIN,LONG_MAX);
    }
};
//     5
// 1         8
//         4     10