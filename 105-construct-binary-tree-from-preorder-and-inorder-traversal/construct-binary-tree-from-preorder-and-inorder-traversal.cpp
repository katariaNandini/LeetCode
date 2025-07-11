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
    TreeNode * funct(vector<int>inorder,int instart,int inend,vector<int>preorder,int prestart,int prend,map<int,int>&inmap){
        if(prestart>prend||instart>inend)return NULL;
        TreeNode* root=new TreeNode(preorder[prestart]);
        int inroot=inmap[root->val];
        int numleft=inroot-instart;
        root->left=funct(inorder,instart,inroot-1,preorder,prestart+1,prestart+numleft,inmap);
        root->right=funct(inorder,inroot+1,inend,preorder,prestart+numleft+1,prend,inmap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     map<int,int> inmap;
     for(int i=0;i<inorder.size();i++){
        inmap[inorder[i]]=i;
     }   
     TreeNode * root=funct(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,inmap);
     return root;
    }
};