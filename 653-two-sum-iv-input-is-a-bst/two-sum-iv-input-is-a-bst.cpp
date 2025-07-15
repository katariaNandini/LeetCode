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
     void in(TreeNode* root,vector<int>&inorder){
        if(root==NULL)return;
        in(root->left,inorder);
        inorder.push_back(root->val);
        in(root->right,inorder);
     }
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        in(root,inorder);
        int n=inorder.size();
        int low=0;
        int high=n-1;
        while(low<high){
            if(inorder[low]+inorder[high]>k)high--;
            else if(inorder[low]+inorder[high]<k)low++;
            else return true;
        }
        return false;
    }
};