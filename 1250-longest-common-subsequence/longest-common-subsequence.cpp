class Solution {
public:
int f(int ind1,int ind2,string s1 ,string s2,vector<vector<int>> &dp){
    if(ind1<0||ind2<0){
        return 0;
    }
    if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
    if(s1[ind1]==s2[ind2]) return dp[ind1][ind2]= 1+f(ind1-1,ind2-1,s1,s2,dp);
    return dp[ind1][ind2]=max(f(ind1-1,ind2,s1,s2,dp),f(ind1,ind2-1,s1,s2,dp));

}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
                vector<vector<int>> dp(n+1,vector<int>(m+1,0));
for(int i=0;i<n;i++) dp[i][0]=0;
for(int i=0;i<m;i++) dp[0][i]=0;
        for(int ind1=1;ind1<=n;ind1++){
            for(int ind2=1;ind2<=m;ind2++){
                // if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
    if(text1[ind1-1]==text2[ind2-1])  dp[ind1][ind2]= 1+dp[ind1-1][ind2-1];
     else dp[ind1][ind2]=max(dp[ind1][ind2-1],dp[ind1-1][ind2]);
            }
        }
        return dp[n][m];
    }
};