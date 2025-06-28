/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here

        while(head!=NULL&&head==head->next){
            head=head->next;
        }
                 Node* temp=head;

        while(temp!=NULL&&temp->next!=NULL){
            if(temp->data==temp->next->data){
                // prev=temp;
                if(temp==head) {head=head->next;
                    head->prev=NULL;
                }
                else{
                    Node* prev=temp->prev;
                    Node* next=temp->next;
                    if(prev)next->prev=prev;
                    if(next)prev->next=next;
                    
                temp=prev;

                }
            }
            
                temp=temp->next;
        }
        return head;
    }
};