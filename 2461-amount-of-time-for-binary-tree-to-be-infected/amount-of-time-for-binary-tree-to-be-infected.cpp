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
void getparents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent,TreeNode* start1){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode * temp=q.front();
        q.pop();
        if(temp->left){
            parent[temp->left]=temp;
            q.push(temp->left);
        }
        if(temp->right){
            parent[temp->right]=temp;
            q.push(temp->right);
        }


    }
}
TreeNode * findNode(TreeNode*root,int start){
    queue<TreeNode*> q;
    q.push(root);
    if(start==root->val)return root;
    while(!q.empty()){
        TreeNode*temp=q.front();
        q.pop();
        if(temp->val==start){
            return temp;
            break;
        }
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
        
        
            }
            return NULL;
}
    int amountOfTime(TreeNode* root, int start) {
TreeNode*start1=findNode(root,start);
         unordered_map<TreeNode*,TreeNode*> parent;
        getparents(root,parent,start1);
        unordered_map<TreeNode*,bool> visit;
        queue<TreeNode*>q;
        q.push(start1);
        visit[start1]=true;
        int curlevel=0;
        while(!q.empty()){
            int n=q.size();
            // if(curlevel==k)break;
            curlevel++;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left&&!visit[temp->left]){
                    q.push(temp->left);
                    visit[temp->left]=true;
                }
                if(temp->right&&!visit[temp->right]){
                    q.push(temp->right);
                    visit[temp->right]=true;
                }
                if(parent[temp]&&!visit[parent[temp]]){
                    q.push(parent[temp]);
                    visit[parent[temp]]=true;
                }
            }

        }
        // vector<int> res;
        // while(!q.empty()){
        //     TreeNode* cur=q.front();
        //     q.pop();
        //     res.push_back(cur->val);
        // }
        return curlevel-1;

    }
};