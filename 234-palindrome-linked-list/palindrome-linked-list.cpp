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
    bool isPalindrome(ListNode* head) {
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* temp=head;
       ListNode* prev=NULL;
       ListNode* front=NULL;
       if(head==NULL||head->next==NULL) return true;
       if(head->next->next==NULL) return head->val==head->next->val;
       while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;

        fast=fast->next->next;
        // count++;
       }
       while(temp!=slow){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
       }
if (fast != NULL) {
    // Odd-length list
    slow = slow->next; // Skip the middle node
}    
//    fast=slow;
       while(slow!=NULL&&prev!=NULL){
        if(slow->val==prev->val){
            slow=slow->next;
            prev=prev->next;
        }
        else return false;
       }
       return true;



    }
};