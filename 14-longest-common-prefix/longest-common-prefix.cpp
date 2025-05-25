class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n=strs.size();
      int m=strs[0].size();
      string ans="";
      if(m==0) return "";  
      for(int i=0;i<m;i++){
        char c=strs[0][i];
        bool flag=false;
        if(n==1) return strs[0];
        for(int j=1;j<n;j++){
            if(c!=strs[j][i]||strs[j].size()<i){flag=false;
                break;
            }
            else {flag=true;}

        }
        if(flag)ans.push_back(c);
        else break;
      }
      return ans;
    }
};