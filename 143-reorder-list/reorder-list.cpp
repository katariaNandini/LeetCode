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
while(temp!=NULL){
    ListNode * front=temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
}
return prev;
}
    void reorderList(ListNode* head) {
                if (!head || !head->next) return;

        ListNode * slow=head;
        ListNode * fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
     ListNode * mid=reverse(slow->next);
     slow->next=NULL;

ListNode * temp=head;
while(temp!=NULL&&mid!=NULL){
    ListNode * temp_next=temp->next;
    ListNode * mid_next=mid->next;
    temp->next=mid;
    mid->next=temp_next;
    temp=temp_next;
    mid=mid_next;
}
// return head;
    }
};