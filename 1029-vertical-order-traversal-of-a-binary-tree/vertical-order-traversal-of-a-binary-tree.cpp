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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>todo;
todo.push({root,{0,0}});
while(!todo.empty()){
    auto p=todo.front();
    todo.pop();
    int x=p.second.first;
    int y=p.second.second;
                TreeNode* temp = p.first;

    nodes[x][y].insert(temp->val);
    if(temp->left){
todo.push({
                    temp->left,
                    {
                        // Move left in
                        // terms of vertical
                        x-1, 
                        // Move down in
                        // terms of level
                        y+1  
                    }
                });    }
    if(temp->right){
        todo.push({{temp->right},{x+1,y+1}});
    }
    
}
vector<vector<int>> ans;
        for(auto p: nodes){
            vector<int> col;
            for(auto q: p.second){
                // Insert node values
                // into the column vector
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            // Add the column vector
            // to the final result
            ans.push_back(col);
        }
        return ans;
    }
};