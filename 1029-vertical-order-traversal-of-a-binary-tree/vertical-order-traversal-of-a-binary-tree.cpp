class Solution {
public:
    void traversal(TreeNode* root, vector<tuple<int, int, int>>& res, int row, int col) {
        if (root == NULL) return;
        res.push_back({col, row, root->val});
        traversal(root->left, res, row + 1, col - 1);
        traversal(root->right, res, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int, int, int>> res;
        traversal(root, res, 0, 0); // row = 0, col = 0

        sort(res.begin(), res.end()); // sorted by col, then row, then val

        map<int, vector<int>> group;
        for (auto [col, row, val] : res) {
            group[col].push_back(val);
        }

        vector<vector<int>> ans;
        for (auto& [col, vals] : group) {
            ans.push_back(vals);
        }

        return ans;
    }
};
