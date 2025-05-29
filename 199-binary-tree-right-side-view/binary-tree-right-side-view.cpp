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
    vector<int> rightSideView(TreeNode* root) {
        map<int,int> arr;
        vector<int> ans;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,int>>q;
       q.push({root,0});
        arr[0]=root->val;
        while(!q.empty()){
            auto it=q.front();
            TreeNode * temp=it.first;
            int level=it.second;
            q.pop();
            // ans.push_back(temp->val);
            arr[level]=temp->val;
            if(temp->left) q.push({temp->left,level+1});
            if(temp->right) q.push({temp->right,level+1});

        }
        for(auto it:arr){
            ans.push_back(it.second);
        }
        return ans;
    }
};