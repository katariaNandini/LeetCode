class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res="";
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(c!=0&&s[i]=='('){c++;
            res.push_back('(');

            }
            else  if(c==0&&s[i]=='('){c++;
            // res.push_back('(');

            } 
            else   if(s[i]==')'){
c--;
if(c!=0)
res.push_back(')');

            }
        }
        return res;
    }
};