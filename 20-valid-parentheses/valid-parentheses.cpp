class Solution {
public:
    bool isValid(string s) {
       stack <int> st ;
       int n=s.size();
       for(int i=0;i<n;i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            st.push(s[i]);
        }
        else {
            if(st.empty())return false;
           char ch=st.top();
           if(st.top()=='{'&&s[i]=='}')
           st.pop();
           else if (st.top()=='['&&s[i]==']')
           st.pop();
           else if  (st.top()=='('&&s[i]==')')
           st.pop();
           else return false;
        }
       } 
       if(st.size()==0) return true;
       return false;
    }
};
