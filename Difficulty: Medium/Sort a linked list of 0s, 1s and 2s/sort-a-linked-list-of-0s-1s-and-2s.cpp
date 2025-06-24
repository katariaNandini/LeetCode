/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        
        Node* zerosd=new Node(-1);
        Node* onesd=new Node(-1);
        Node* twosd=new Node(-1);
        Node* zero=zerosd;
        Node* one=onesd;
        Node* two=twosd;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
                
            }
            else if(temp->data==1){
                one->next=temp;
                one =one->next;
            }
            else {
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
            
        }
        zero->next=NULL;
        one->next=NULL;
        two->next=NULL;
        
        
        // if(one->data!=-1)
        zero->next=onesd->next;
        else zero->next=twosd->next;
          if(two->data!=-1) one->next=twosd->next;
        // else zero->next=twosd->next;
        
       
        return zerosd->next;
        // code here
        // while()
    }
};