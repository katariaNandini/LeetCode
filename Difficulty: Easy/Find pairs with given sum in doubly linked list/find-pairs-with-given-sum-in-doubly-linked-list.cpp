// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        Node * last=NULL;
        vector<pair<int,int>>ans;
        if(head==NULL||head->next==NULL)return ans;
        Node * temp=head;
        int total=0;
        while(temp!=NULL){
            last=temp;
            temp=temp->next;
            total++;
        }
        // ans.push_back({last->data,0});
        // return ans;
        temp=head;
        int tempCount=0;
        int lastCount=0;
        while(temp!=last&&last!=NULL&&temp!=NULL){
            if(lastCount+tempCount>=total)break;
            if(temp->data+last->data>target){last=last->prev;
                lastCount++;
            }
            else if(temp->data+last->data<target){temp=temp->next;
                tempCount++;
            }
            else {
                ans.push_back({temp->data,last->data});
                last=last->prev;
                temp=temp->next;
                lastCount++;
                tempCount++;
            }
        }
        return ans;
    }
};