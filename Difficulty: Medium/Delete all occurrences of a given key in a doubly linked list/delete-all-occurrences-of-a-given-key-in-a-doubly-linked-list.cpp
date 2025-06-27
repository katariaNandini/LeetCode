// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node * cur=*head_ref;
        // Write your code here
        while(cur != NULL &&cur->data==x){
            // head->prev=NULL;
        cur=cur->next;
        if (cur != NULL) cur->prev = NULL;
}
        *head_ref = cur;
        Node* temp=cur;
        while(temp!=NULL){
            if(temp->data==x){
                Node*  prev=temp->prev;
                Node* next=temp->next;
                temp->prev=NULL;
                temp->next=NULL;
                if(prev!=NULL)prev->next=next;
              if(next!=NULL) next->prev=prev;
               temp=next;
                // temp->prev=temp->prev->prev;
                // temp->next=t
            }
            else temp=temp->next;
        }
    }
};