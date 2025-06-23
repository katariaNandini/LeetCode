/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL||head->next==NULL)return head;
        DLLNode* temp=head->next;
        head->next=NULL;
        head->prev=temp;
        // head=temp;
        // temp=temp->next;
        while(temp!=NULL){
            head->next=head->prev;
            head->prev=temp;
            head=temp;
            temp=temp->next;
            
        }
         if (temp != NULL)
            head = temp->prev;
        return head;
    }
};