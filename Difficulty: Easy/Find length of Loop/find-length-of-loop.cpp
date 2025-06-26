/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        map<Node* ,int>mp;
        Node * temp=head;
        int count=0;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                Node* start=temp;
                count=1;
                temp=temp->next;
                while(temp!=start&&temp!=NULL){
                    count++;
                    temp=temp->next;
                }
                return count;
            }
            else{
            mp[temp]=1;}
            temp=temp->next;
        }
        return count;
    }
};