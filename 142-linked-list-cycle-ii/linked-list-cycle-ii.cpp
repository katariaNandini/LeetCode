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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>st;
    ListNode * fast=head;
    ListNode * slow=head;
    int index=0;
    while(slow!=NULL){
if(st.find(slow)!=st.end())return slow;
        st.insert(slow);
        index++;
        slow=slow->next;
    }
    return NULL;
    }
};