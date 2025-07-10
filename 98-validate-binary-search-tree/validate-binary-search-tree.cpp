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
// void inorder(TreeNode* root,vector<int>)
    bool isValidBST(TreeNode* root) {
        //   vector<int>inorder;
        // int prev=INT_MIN;
        TreeNode* previous=NULL;
        bool ans=true;
        if(root==NULL)return true;
        TreeNode * cur=root;
        while(cur!=NULL){
            if(cur->left==NULL){
                if(ans==true){
                    if(previous!=NULL&&cur->val<=previous->val)ans= false;
                    else previous=cur;
                }
                // inorder.push_back(cur->val);
                cur=cur->right;
            }

            else{
                TreeNode* prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur){
                    prev=prev->right;
                }
                if(prev->right==NULL){prev->right=cur;
                cur=cur->left;}
                else{
                    prev->right=NULL;
                    if(ans==true){
                    if(previous!=NULL&&cur->val<=previous->val)ans= false;
                    else previous=cur;
                }
                    cur=cur->right;
                }
            }
        }
       return ans; 
    }
};