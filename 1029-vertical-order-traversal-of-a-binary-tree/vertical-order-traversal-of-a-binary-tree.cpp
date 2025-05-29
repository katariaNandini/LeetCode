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
void traversal(TreeNode* root,vector<tuple<int,int,int>>&res,int level,int col){
    if(root==NULL) return ;
    res.push_back({col,level, root->val});

    if(root->left){
        // res.push_back({level-1,root->left->val});
    traversal(root->left,res,level-1,col+1);
    }
    if(root->right){
        // res.push_back({level+1,root->right->val});
    traversal(root->right,res,level+1,col+1);
    }
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int,int,int>> res;
        traversal(root,res,0,0);
        sort(res.begin(), res.end());
        vector<vector<int>> ans;
        map<int,vector<int>> group;

        for( auto [col, row, val]:res){
            group[row].push_back(val);
        }
        for(auto it:group){
            ans.push_back(it.second);
        }
        //         int level=it.first;
        //         int val=it.second;
        //         vector<int> temp;
        //         while(it.first==level){
        //                 temp.push_back(val);
                        
        //         }


        // }
return ans;
    }
};