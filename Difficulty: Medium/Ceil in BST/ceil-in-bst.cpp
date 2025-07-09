/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */

int findCeil(Node* root, int input) {
    // Your code here
    int greater=-1;
    while(root!=NULL){
        if(root->data>=input)greater=root->data;
         if(root->data==input)return input;
        if(root->data>input)root=root->left;
        else if (root->data<input) root=root->right;
        // else if(greater==input)return greater;
        // else return greater;
    }
    return greater;
//   else  return root->data;
}