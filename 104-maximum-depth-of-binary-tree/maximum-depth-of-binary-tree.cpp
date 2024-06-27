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
 void nodes(TreeNode* root,int ans,vector<int>&arr){
      if (!root) {
            return ;
        }
       // arr.push_back(root->val);
         if (!root->left && !root->right) {
            arr.push_back(ans);
        } else {
            nodes(root->left,ans+1,arr);
            nodes(root->right, ans+1,arr);
        }
  }
    int maxDepth(TreeNode* root) {

        vector<int>arr;
        nodes(root,1,arr);
        if(arr.size()==0){
            return 0;
        }
        int ans=*max_element(arr.begin(), arr.end());

        return ans;
    }
};