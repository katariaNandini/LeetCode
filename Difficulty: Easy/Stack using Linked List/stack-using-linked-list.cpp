// struct StackNode{
//   int data;
//   StackNode* next;
//   StackNode(int x){
//       data=x;
//       next=NULL;
      
//   }
    
// };

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode* cur=new StackNode(x);
        cur->next=top;
        top=cur;
        // code here
        
    }

    int pop() {
          if (top == NULL) {
            return -1; // or throw an exception
        }
        int val=top->data;
        top=top->next;
        return val;
        // code here
    }

    MyStack() { top = NULL; }
};