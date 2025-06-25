/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
                Node* temp=head;

        if(head==NULL) return head;
        if (head->next == NULL) {
            int sum = head->data + 1;
            head->data = sum % 10;
            
            if (sum >= 10) {
                // There is a carry, so add a new node
                Node* newNode = new Node(1);
                newNode->next = head;
                head = newNode;
            }
            
            return head;
        }
// Your Code here
        Node* prev=NULL;
        Node* front=NULL;
        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        // int remi=0;
        Node * newhead=prev;
        Node* last=NULL;
        int newval=prev->data+1;
        prev->data=newval%10;
        newval=newval/10;
        prev=prev->next;

        while(prev!=NULL){
            newval=prev->data+newval;
            prev->data=(newval)%10;
            newval=newval/10;
            last=prev;
            prev=prev->next;
        }
        // prev->data=newval;
    
        if(newval!=0){
            Node* nextnode=new Node(newval);
            last->next=nextnode;
        }
         temp=newhead;
       Node*  prev1=NULL;
         front=NULL;
        while(temp!=NULL){
            front=temp->next;
            temp->next=prev1;
            prev1=temp;
            temp=front;
        }
        return prev1;
        // return head of list after adding one
    }
};