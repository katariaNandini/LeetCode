class Solution {
public:
    int maxDepth(string s) {
        // stack<char> st;
        int openbrace=0;
        int n=s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                // st.push(s[i]);
            // int m=st.size();
            openbrace++;
                maxi=max(maxi,openbrace);}
            else  if(s[i]==')')openbrace--;
            // else if(isdigit(s[i])){
            //     int m=st.size();
            //     maxi=max(maxi,m);
            // }
            
        }
        return maxi;
    }
};