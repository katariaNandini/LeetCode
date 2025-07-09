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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp;
        TreeNode* newnode=new TreeNode(val);
        TreeNode* temp1=root;
        if(root==NULL)return newnode;
        while(root){
              temp=root;
            if(root->val>val){
                root=root->left;
            }
            else root=root->right;
        }
        if(temp->val>val)temp->left=newnode;
        else temp->right=newnode;    
    return temp1;
        }
};