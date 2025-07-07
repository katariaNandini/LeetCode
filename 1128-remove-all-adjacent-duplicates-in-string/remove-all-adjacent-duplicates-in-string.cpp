class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.empty())st.push(s[i]);
            else if(st.top()==s[i])st.pop();
            else st.push(s[i]);
        }
        int k=st.size();
        string ans="";
        for(int i=0;i<k;i++){
            ans.push_back(st.top());
            st.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};