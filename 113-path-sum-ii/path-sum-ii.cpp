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
bool btp(TreeNode* root, int s, int ans, bool& ansi,vector<int> &temp,vector<vector<int>> & fin) {
        if (root == NULL)
            return false;
        if (root->left == NULL && root->right == NULL && s == ans) {
            fin.push_back(temp);
            ansi = true;
            cout << ansi << endl;
            return true;
        }

        bool l = false;
        if (root->left != NULL) {
            temp.push_back(root->left->val);
            l = true;
            s += root->left->val;
            btp(root->left, s, ans, ansi,temp,fin);
        }
        if (l) {
            s -= root->left->val;
            temp.pop_back();
        }
        bool r = false;
        if (root->right != NULL) {
            temp.push_back(root->right->val);

            r = true;
            s += root->right->val;

            btp(root->right, s, ans, ansi,temp,fin);
        }
        if (r) {
            s -= root->right->val;
                        temp.pop_back();

        }
        return false;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
           vector<int> temp;
        vector<vector<int>> fin;
         if (root == NULL) {
            return fin;
        }
        bool ans = false;
        int s = root->val;
      
        temp.push_back(root->val);
        bool a = btp(root, s, targetSum, ans,temp,fin);
        return fin;
    }
};