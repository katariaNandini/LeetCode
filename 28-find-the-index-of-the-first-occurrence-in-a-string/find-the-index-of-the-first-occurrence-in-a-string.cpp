class Solution {
public:
    void clps(string&needle,vector<int> & lps,int m){
        int len=0;
        lps[0]=0;
        int i=1;
        while(i<m){
            if(needle[i]==needle[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else

                {lps[i]=0;
                i++;}
            }
        }
    }
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
                if (m == 0) return 0;  // Handle empty needle case

        vector<int> lps(m,0);
        clps(needle,lps,m);
        int i=0,j=0;
        while(i<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;

            }

            if(j==m) {return i-m;
            j=lps[j-1];
            }
            else if(i < n&&haystack[i]!=needle[j]){
                if(j!=0) j=lps[j-1];
                else
            i++;
            }

            
        }
        return -1;
    }
};