class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int n=s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){st.push(s[i]);
            int m=st.size();
                maxi=max(maxi,m);}
            else  if(s[i]==')')st.pop();
            // else if(isdigit(s[i])){
            //     int m=st.size();
            //     maxi=max(maxi,m);
            // }
            
        }
        return maxi;
    }
};