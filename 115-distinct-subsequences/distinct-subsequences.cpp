class Solution {
public:
int f(int i,int j,string s1,string s2,vector<vector<int>> dp){
    if(j<0) return 1;
    if(i<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j])return dp[i][j]=f(i-1,j-1,s1,s2,dp)+f(i-1,j,s1,s2,dp);
    return  dp[i][j]=f(i-1,j,s1,s2,dp);
}
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();

        vector<vector<uint64_t>> dp(n+1,vector<uint64_t>(m+1,0));
        for(int i=0;i<=n;i++)dp[i][0]=1;

// for(int j=0;j<=m;j++) dp[0][j]=0;


        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
    if(s[i-1]==t[j-1])  dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
   else    dp[i][j]=dp[i-1][j];
            }
        }
        return static_cast<int>(dp[n][m]);
    }
};