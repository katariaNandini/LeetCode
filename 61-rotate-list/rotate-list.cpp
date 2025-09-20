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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        if(head==NULL||head->next==NULL)return head;
        ListNode * temp=head;
        ListNode * fast=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        
        k=k%len;
        if(k==0)return head;
        int point=len-k-1;
        for(int i=0;i<point;i++){
            fast=fast->next;
        }
        ListNode * newhead=fast->next;
        fast->next=NULL;
        ListNode * newtemp=newhead;
        while(newtemp->next!=NULL){
        newtemp=newtemp->next;
    }
    newtemp->next=head;
    return newhead;
    }
};