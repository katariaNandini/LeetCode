class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!st.empty()&&s[i]=='('){st.push('(');
            res.push_back('(');

            }
            else  if(st.empty()&&s[i]=='('){st.push('(');
            // res.push_back('(');

            } 
            else   if(!st.empty()&&s[i]==')'){
st.pop();
if(!st.empty())
res.push_back(')');

            }
        }
        return res;
    }
};