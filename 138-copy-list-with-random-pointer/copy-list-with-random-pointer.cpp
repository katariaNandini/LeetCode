/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * temp=head;
        Node * next=NULL;
        while(temp!=NULL){
            Node * newnode=new Node(temp->val);
            next=temp->next;
            temp->next=newnode;
            newnode->next=next;
            temp=next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->random==NULL)temp->next->random=NULL;
            else temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
        temp=head;
        Node* dummy=new Node(-1);
        Node * temp1=dummy;
        while(temp!=NULL){
            // next=temp->next;
            temp1->next=temp->next;
            temp->next=temp->next->next;
            // next->next=next->next->next;
            temp=temp->next;
            temp1=temp1->next;

        }

        
        return dummy->next;
    }
};