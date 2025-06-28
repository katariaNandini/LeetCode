/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode* reverse(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* nexti=new ListNode(-1);
if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head;

        while(temp!=NULL
        // &&temp->next!=NULL
        ){
            nexti=temp->next;
            temp->next=prev;
            prev=temp;
           temp=nexti;
        //    temp=temp->next;
            // temp=nexti;
            // temp=temp->next;
            // nexti=nexti->next;

        }
        return prev;
    }
    ListNode* findnode(ListNode* head, int k){
        k-=1;
        while(k>0&&head!=NULL){
            k--;
            head=head->next;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
     ListNode* temp=head;
     ListNode *prevnode=NULL;
     while(temp!=NULL){
        ListNode* knode=findnode(temp,k);
        if(knode==NULL){
            if(prevnode!=NULL)prevnode->next=temp;
            break;
        }
      ListNode*  nextnode=knode->next;
        knode->next=NULL;
        reverse(temp);
        if(temp==head)head=knode;
        else{
            prevnode->next=knode;
        }
        prevnode=temp;
        temp=nextnode;
     }
        return head;
    }
};