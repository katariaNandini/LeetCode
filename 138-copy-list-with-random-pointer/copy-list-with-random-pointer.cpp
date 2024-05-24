/*
// Definition for a Node->
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
        while(temp!=NULL){
            Node* next=temp->next;
            Node* copy=new Node(temp->val);
            copy->next=next;
            temp->next=copy;
            temp=next;

        }
        temp=head;
        while(temp!=NULL){
            Node* cp=temp->next;
            if(temp->random){
                cp->random=temp->random->next;
            }
            else cp->random=nullptr;
            temp=temp->next->next;
        }
temp=head;
Node* dummy=new Node(0);
Node* res=dummy;
        while(temp!=NULL){
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};