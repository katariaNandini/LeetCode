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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {}; // Handling the case for empty tree
        
        vector<vector<int>> result;
        queue<pair<int, TreeNode*>> nodes;
        
        nodes.push({0, root});
        
        while (!nodes.empty()) {
            auto it = nodes.front();
            nodes.pop();
            
            int level = it.first;
            TreeNode* temp = it.second;
            
            // Ensure the result vector has enough space for the current level
            if (result.size() <= level) {
                result.push_back({});
            }
            
            result[level].push_back(temp->val);
            
            if (temp->left) nodes.push({level + 1, temp->left});
            if (temp->right) nodes.push({level + 1, temp->right});
        }
        
        return result;
    }
};