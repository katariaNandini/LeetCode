/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  bool isleaf(Node * root){
    return (!root->left && !root->right);
  }
  void letfboundry(Node * root,vector<int>&res){
      Node* cur=root->left;
      while(cur){
          if(!isleaf(cur)) res.push_back(cur->data);
          if(cur->left) cur=cur->left;
          else cur=cur->right;
          
      }
  }
  
  void rightboundry(Node* root ,vector<int> & res){
       Node* cur=root->right;
       vector<int>temp;
      while(cur){
          if(!isleaf(cur)) temp.push_back(cur->data);
          if(cur->right) cur=cur->right;
          else cur=cur->left;}
          for(int i=temp.size()-1;i>=0;i--){
              res.push_back(temp[i]);
          }
      
  }
  void leaf(Node*root,vector<int>& res){
      if(isleaf(root)){res.push_back(root->data);
         return ;
      }
      if(root->left) leaf(root->left,res);
      if(root->right) leaf(root->right,res);
      
  }
    vector<int> boundaryTraversal(Node *root) {
        vector<int> res;
        if(!root)return res;
        if(!isleaf(root)) res.push_back(root->data);
        letfboundry(root,res);
        leaf(root,res);
        rightboundry(root,res);
        return res;
        // code here
        
    }
};