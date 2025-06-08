/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int counta = 0, countb = 0;
        ListNode *a = headA;
        ListNode *b = headB;
        while(a!=NULL){
            counta++;
            a=a->next;

        }
        while(b!=NULL){
            countb++;
            b=b->next;

        }
         a = headA;
        b = headB;  
        if(counta>countb){
            int diff=counta-countb;
            while(diff!=0&&a!=NULL){
                a=a->next;
                diff--;
            }
        }
        else {
            int diff=countb-counta;
            while(diff!=0&&b!=NULL){
                b=b->next;
                diff--;
            }
        }

        while(a!=NULL&&b!=NULL){
            if(a==b) return a;
            a=a->next;
            b=b->next;

        }
        return NULL;
    }
};