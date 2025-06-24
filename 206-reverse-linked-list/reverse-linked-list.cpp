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
    ListNode* reverseList(ListNode* head) {
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
};