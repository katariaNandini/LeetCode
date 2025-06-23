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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
       

        ListNode* dummy=new ListNode(0);
        ListNode* cur=dummy;
        int remi =0;
        while(temp1!=NULL&&temp2!=NULL){
            int sum=temp1->val+temp2->val+remi;
            //  remi=0;
             ListNode * nexti=new ListNode(sum%10);
            // if(sum>9)
            // {nexti->val=sum
             remi=sum/10;
            // }
            // else ListNode * nexti=new ListNode(sum);
            // list->val= num%10;
            cur->next=nexti;
            // num=num/10;
            // list=list->next;
            cur=nexti;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
           int sum=temp1->val+remi;
             ListNode * nexti=new ListNode(sum%10);
             remi=sum/10;
            cur->next=nexti;
            cur=nexti;
            temp1=temp1->next;
             

        }
         while(temp2!=NULL){
           int sum=temp2->val+remi;
             ListNode * nexti=new ListNode(sum%10);
             remi=sum/10;
            cur->next=nexti;
            cur=nexti;
            temp2=temp2->next;
             

        }
        if(remi!=0){

            ListNode * nexti=new ListNode(remi);
            //  remi=sum/10;
            cur->next=nexti;
            cur=nexti;
            // temp2=temp2->next;
        }
        return dummy->next;
    }
};