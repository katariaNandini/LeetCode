/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  Node* pred(Node* root,int key){
      int mini=INT_MAX;
      Node* ans=NULL;
      while(root!=NULL){
          if(root->data<key){
              if(ans==NULL||ans->data<root->data)ans=root;
              root=root->right;
          }
          else root=root->left;
          
      }
      return ans;
  }
  Node* succ(Node* root,int key){
      int maxi=INT_MIN;
       Node* ans=NULL;
      while(root!=NULL){
          if(root->data>key){
            //   mini=max(mini,root->data);
            ans=root;
              root=root->left;
          }
          else {root=root->right;
            //   if(ans==NULL||ans->data<root->data)ans=root;
              
          }
      }
      return ans;
  }
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* predi=pred(root,key);
        Node* succi=succ(root,key);
        return {predi,succi};
        // code here
        
    }
};