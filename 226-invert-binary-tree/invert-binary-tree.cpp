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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL)return root;
        q.push(root);
        while(!q.empty()){
            TreeNode * temp=q.front();
            q.pop();
                swap(temp->right,temp->left);
              if(temp->left)  q.push(temp->left);
              if(temp->right)  q.push(temp->right);

            
        }
        return root;
    }
};