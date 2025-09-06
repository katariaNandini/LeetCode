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
        // Write your code here
         if(*head_ref==NULL)return ;
        while(*head_ref!=NULL&&(*head_ref)->data==x){
            *head_ref=(*head_ref)->next;
            (*head_ref)->prev=NULL;
        }
        if(*head_ref==NULL)return ;
        
        Node * temp=*head_ref;
        Node * prev=NULL;
        while(temp!=NULL){
            if(temp->data==x){if(prev!=NULL)prev->next=temp->next;
           if(temp->next!=NULL) temp->next->prev=prev;
            }
            else prev=temp;
            temp=temp->next;
        }
        
    }
};