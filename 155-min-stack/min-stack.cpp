class MinStack {
public:
stack<long long> st;
long long mini;
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else {
            if(mini>val){
                // long long num=2*val*1LL-mini;
                st.push(2LL * val - mini);
                mini=val;
            }
            else st.push(val);
        }
    }
    
    void pop() {
        if(st.empty()) return ;
        long long el=st.top();
        st.pop();
        if(el<mini){mini=2*mini-el;
        
            //  st.pop();
             }
    }
    
    int top() {
        if(mini>st.top()) 
        return mini;
        else return st.top();
        
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */