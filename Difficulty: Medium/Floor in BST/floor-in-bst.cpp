// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        int floor=-1;
        while(root!=NULL){
            if(root->data<x){
               if( floor<root->data)
                floor=root->data;
            };
            if(root->data==x)return x;
            if(root->data>x)root=root->left;
            else root=root->right;
            
        }
        return floor;
    }
};