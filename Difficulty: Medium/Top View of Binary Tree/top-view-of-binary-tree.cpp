/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        if(root==NULL) return {};
        map<int,int> mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            Node* temp=it.first;
            int level=it.second;
            q.pop();
            if(mp.find(level)==mp.end()) mp[level]=temp->data;
            if(temp->left) q.push({temp->left,level-1});
            if(temp->right) q.push({temp->right,level+1});
        }
        vector<int> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};