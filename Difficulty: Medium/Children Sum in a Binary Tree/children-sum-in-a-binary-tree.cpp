/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    bool change(Node* root){
        if(root==NULL||(!root->left&&!root->right)) return true;
        int sum=0;
        if(root->left) sum+=root->left->data;
        if(root->right) sum+=root->right->data;
        return (root->data==sum)&&change(root->left)&&change (root->right);
        
    }
    int isSumProperty(Node *root) {
        bool ans=change(root);
        if(ans==true)return 1;
        else return 0;
        // Add your code here
    }
};