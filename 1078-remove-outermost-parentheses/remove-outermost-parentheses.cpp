class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(st.empty()&&s[i]=='('){
                st.push('(');
            }
            else if(!st.empty()&&s[i]=='('){
                st.push('(');
                ans+='(';
            }
            else {
                st.pop();
               if(!st.empty()) ans+=')';
            }
           
        }
        return ans;

    }
};