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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head->next==NULL&&n==1) return NULL;

        ListNode * fast=head;
        ListNode * slow=head;
        // int count=0;
        while(n){
            fast=fast->next;
            n--;
            // count++;
        }
        if(fast==NULL) return head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
            // count++;
        }
        // if(count==n) return head->next;
        if(slow->next==NULL) return head;
        slow->next=slow->next->next;
        return head;
    }
};