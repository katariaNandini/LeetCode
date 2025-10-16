class Solution {
public:
bool pali(int i,int j,string &  s,vector<vector<int>>&dp){
if(i>j) return true;
if(s[i]!=s[j])return false;
if(dp[i][j]!=-1) return dp[i][j];
return dp[i][j]=pali( i+1,j-1,s,dp);

}
    string longestPalindrome(string s) {
        int n=s.size();
        int maxi=0;
        int start=0;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(pali(i,j,s,dp)){
                if(maxi<(j-i+1)){
                    maxi=j-i+1;
                    start=i;
                }
            }
        }
        }
        return s.substr(start,maxi);
            }
};