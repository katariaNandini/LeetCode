// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  int countnode(Node * root){
      if(root==NULL)return 0;
      int ans=1+countnode(root->left)+countnode(root->right);
     return ans;
  }
  bool CBT(Node * root,int index,int count){
      if(root==NULL)return true;
      if(index>=count)return false;
      return CBT(root->left,2*index+1,count)&&CBT(root->right,2*index+2,count);
      
  }
  bool ismaxheap(Node* root){
      if(root->left==NULL&&root->right==NULL)return true;
      if(root->right==NULL)return root->data>root->left->data;
      else {
          bool left=ismaxheap(root->left);
          bool right=ismaxheap(root->right);
          return left&&right&&root->data>root->left->data&&root->data>root->right->data;
      }
  }
    bool isHeap(Node* tree) {
        int index=0;
        int totalcount=countnode(tree);
        if(CBT(tree,index,totalcount)&&ismaxheap(tree))
        return true;
        else return false;
        // code here
        
    }
};