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
ListNode * reverse(ListNode * head){
    ListNode * temp=head;
    ListNode * prev=NULL;
    ListNode * front=NULL;
    while(temp!=NULL){
    front=temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
}
return prev;
}
ListNode* kth(ListNode*head,int k){
    k=k-1;
    while(k>0&&head!=NULL){
        head=head->next;
        k--;
    }
    return head;

}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp=head;
        ListNode * prev=NULL;
        ListNode * knode=NULL;
        ListNode * next=NULL;
        while(temp!=NULL){
            knode=kth(temp,k);
            if(knode==NULL)return head;
            next=knode->next;
            knode->next=NULL;
            reverse(temp);
            if(prev==NULL)head=knode;
            if(prev!=NULL)prev->next=knode;
            temp->next=next;
            prev=temp;
            temp=next;
        }
return head;
    }
};