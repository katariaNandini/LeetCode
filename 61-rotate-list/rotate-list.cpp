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
        int len=1;
        ListNode* temp=head;
        if(head==NULL||head->next==NULL||k==0) return head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%len;
        len=len-k;
        while(len>0){
            temp=temp->next;
            len--;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        
    }

};
// temp=head;
        
//          len=(len-k);
//          int len1=len;
//         if(len<=0)return NULL;
//         ListNode* dummy=new ListNode(-1);
//         ListNode* head1=head;
//         ListNode* prev=NULL;
//         while(temp->next!=NULL){
//             len--;

//             prev=temp;
//             temp=temp->next;
//             if(len==0)head=temp;
            

//         }
//         temp->next=head1;
        
//         while(head1!=NULL&&k>0){
//             head1=head1->next;
//             k--;
//         }
//         head1->next=NULL;
// return head;