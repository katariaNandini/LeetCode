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
               ListNode* temp1 = head;

            if(head == NULL||head->next == NULL) return head;
int count=1;
            while(temp1->next!=NULL){
                temp1=temp1->next;
                count++;
            }
           // temp1=temp1->next;
            temp1->next=head;

            k=k%count;
            k=count-k;
for(int i=0;i<k;i++) temp1=temp1->next;
 head=temp1->next;
       temp1->next=NULL;
        return head;
    }
};