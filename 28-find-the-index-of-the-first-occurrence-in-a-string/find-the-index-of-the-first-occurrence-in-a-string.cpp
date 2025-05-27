class Solution {
public:
    int strStr(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=1;
        int len=0;
        vector<int>lps(m);
        lps[0]=0;
        while(i<m){
            if(t[i]==t[len]){
                len++;
                lps[i]=len;
                i++;
                
            }
            else {
                if(len!=0){
                    len=lps[len-1];
                }
                else {lps[i]=0;
                i++;}
            }
        }
        i=0;
        int j=0;
        while(i<n){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            if(j==m) return i-j;
    else if(s[i]!=t[j]){
        if(j!=0) j=lps[j-1];
        else i++;
    }
    
        }
        return -1;
    }
};