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
    ListNode* mergei(ListNode* head1,ListNode* head2){
        ListNode* dummy=new ListNode(-1);
        ListNode * temp=dummy;
        while(head1!=NULL&&head2!=NULL){
            if(head1->val<head2->val){
             temp->next=head1;
             head1=head1->next;   
            }
            else {
                temp->next=head2;
             head2=head2->next;
            }
            temp=temp->next;
        }
        if(head1!=NULL)temp->next=head1;
        if(head2!=NULL)temp->next=head2;
return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
                if (lists.empty()) return nullptr;

        ListNode* head=lists[0];
        int n=lists.size();
        for(int i=1;i<n;i++){
            head=mergei(head,lists[i]);
        }    
        return head;    
    }
};