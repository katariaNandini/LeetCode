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
void tra(TreeNode* root,string s,vector<string> & ans){
    if(root==NULL) {
        //  s.erase(s.size() - 2);
        // ans.push_back(s);
        return;}
        if(s.empty())s+=to_string(root->val);
   else  s+="->"+to_string(root->val);
    if (!root->left && !root->right) {
            ans.push_back(s);
            return;
        }
    tra(root->left,s,ans);
    tra(root->right,s,ans);
    // s.erase(s.size() - 3);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> s;
        string p; 
        tra(root,p,s);
        return s;
    }
};