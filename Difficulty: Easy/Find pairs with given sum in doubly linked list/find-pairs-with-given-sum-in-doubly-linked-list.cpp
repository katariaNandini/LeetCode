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
          vector<pair<int, int>> ans;
        //   Node* temp=head;
        Node * temp1=head;
        Node * temp2=head;
      while (temp2->next != NULL) {
    temp2 = temp2->next;
}
        
        while(temp1!=NULL&&temp2!=NULL&&temp2->next!=temp1&&temp1!=temp2){
    if(temp1->data+temp2->data==target){ans.push_back({temp1->data,temp2->data});
        temp1=temp1->next;
        temp2=temp2->prev;
    }
   else  if(temp1->data+temp2->data>target)temp2=temp2->prev;
    else temp1=temp1->next;
    
        }
        
                
        //                 while(temp2!=NULL&&temp1->data+temp2->data<=target){
        //         temp2=temp2->next;
        //     }
        //     temp1=temp1->next;
            
        // }
        return ans;
    }
};