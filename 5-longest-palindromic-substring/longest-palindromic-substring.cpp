class Solution {
public:
// see the prev submistted solution you will understand better 
int maxi=INT_MIN;
int start=-1;
    void oe(int i,int j,string s,int n){
        while(i>=0&&j<n&&s[i]==s[j]){
            int len=j-i+1;
            if(len>maxi){
                maxi=len;
                start=i;

            }
            i--;
            j++;
        }
    }
    string longestPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            oe(i,i,s,n);
            oe(i,i+1,s,n);
        }
return s.substr(start,maxi);
    }
};