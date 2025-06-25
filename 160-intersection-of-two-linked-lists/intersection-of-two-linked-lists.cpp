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
        ListNode* ha=headA;
        ListNode* hb=headB;
        while(ha!=NULL&&hb!=NULL){
            ha=ha->next;
            hb=hb->next;      
        }
        int counta=0;
        while(ha){
            ha=ha->next;
            counta++;
        }
        int countb=0;
         while(hb){
            hb=hb->next;
            countb++;
        }
        hb=headB;
        ha=headA;
        if(countb){
            while(countb){
            hb=hb->next;
            countb--;
        }}
         if(counta){
            while(counta){
            ha=ha->next;
            counta--;
        }}
        while(ha!=NULL&&hb!=NULL){
            if(ha==hb)return ha;
            else {
                 ha=ha->next;
            hb=hb->next;    
            }
        }
        return NULL;


    }
};