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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev;
        if(head==NULL||head->next==NULL)return NULL;
        int first=0;
        while(fast!=NULL&&fast->next!=NULL){
          if(first==0){ fast=fast->next->next;
          first=1;}
          else {
            fast=fast->next->next;
            slow=slow->next;
          }

        }
        slow->next=slow->next->next;
        // delete(slow);
        return head;
    }

};