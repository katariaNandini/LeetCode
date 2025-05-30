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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair <TreeNode*,int>>q;
        q.push({root,0});
        int ans=INT_MIN;
        while(!q.empty()){
            int n=q.size();
            int mini=q.front().second;
            int first,last;
            for(int i=0;i<n;i++){
             int   cur_ind=q.front().second-mini;
                TreeNode*temp=q.front().first;
                q.pop();
                if(i==0) first=cur_ind;
                if(i==n-1) last=cur_ind;
                if(temp->left) q.push({temp->left,(long long)cur_ind*2+1});
                if(temp->right) q.push({temp->right,(long long)cur_ind*2+2});
            }
                ans=max(ans,(last-first+1));
            
        }
        return ans;
    }
};