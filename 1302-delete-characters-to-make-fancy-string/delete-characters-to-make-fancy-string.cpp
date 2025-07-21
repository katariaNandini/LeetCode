class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int n=s.size();
        ans.push_back(s[0]);
        if(n<3)return s;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i])cnt++;
            else cnt=1;
            if(cnt>=3)continue;
            else ans.push_back(s[i]);

        }
        // if()'
        return ans;
    }
};