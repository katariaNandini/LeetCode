class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n=strs.size();
        string ans="";
        if(strs[0].size()==0)return ans;
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            bool match =true;
            for(int j=1;j<n;j++){
                if(strs[j][i]!=ch||strs[j].size()<i){ match= false;
                break;}
                else match=true;
        }
        if(match==true) ans.push_back(ch);
        else return ans;
    }
    return ans;
    }
};