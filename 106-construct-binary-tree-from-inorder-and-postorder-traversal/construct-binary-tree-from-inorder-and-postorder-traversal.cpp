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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> inmap;
        for(int i=0;i<inorder.size();i++){
            inmap[inorder[i]]=i;
        }
       TreeNode* root= buildtree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inmap);
       return root;
        
    }
    TreeNode* buildtree(vector<int>& inorder,int instart,int inend, vector<int>& postorder,int postart ,int poend,map<int,int> &inmap){
        if(instart>inend||postart>poend)return NULL;
        TreeNode* root= new TreeNode(postorder[poend]);
        int inroot=inmap[root->val];
        int numleft=inroot-instart;
        root->left=buildtree(inorder,instart,inroot-1,postorder,postart,postart+numleft-1,inmap);
        root->right=buildtree(inorder,inroot+1,inend,postorder,postart+numleft,poend-1,inmap);
        return root;
    }
};


