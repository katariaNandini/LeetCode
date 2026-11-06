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
bool  btp(TreeNode* root,int s,int ans,bool &ansi){
    if(root==NULL) return false;
     if(root->left==NULL&&root->right==NULL&&s==ans){        ansi=true;cout<<ansi<<endl;
      return true;
}
        
       
        bool l=false;
        if(root->left!=NULL){
            l=true;
           s+=root->left->val;
             btp(root->left,s,ans,ansi);

        }
        if(l){
                      s-=root->left->val;

        }
        bool r=false;
        if(root->right!=NULL){
            r=true;
                       s+=root->right->val;

            btp(root->right,s,ans,ansi);
        }
       if(r){
                       s-=root->right->val;

        }
     return false;   
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        bool ans=false;
int s=root->val;
        bool a= btp(root,s,targetSum,ans);
        return ans;
    }
};