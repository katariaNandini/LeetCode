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
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int res=-1;
        int ans=-1;
        // if(root==NULL)return root->val;
        TreeNode * cur=root;
        while(cur!=NULL){
            if(cur->left==NULL){
                count++;
                if(count==k){ans=  cur->val;
                // break;
                }

                cur=cur->right;
            }

            else{
                TreeNode* prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur){
                    prev=prev->right;
                }
                if(prev->right==NULL){prev->right=cur;
                cur=cur->left;}
                else{
                    prev->right=NULL;
                    count++;
                if(count==k){ans=  cur->val;
                // break;
                }

                    cur=cur->right;
                }
            }
            // if(res!=-1)break;
            // if(count==k)return cur->val;
        }
        return ans;
    }
};