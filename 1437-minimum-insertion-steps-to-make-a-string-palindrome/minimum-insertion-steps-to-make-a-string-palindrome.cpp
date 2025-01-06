class Solution {
public:
 int f(int n,int m,string &text1 ,string &text2,vector<vector<int>> &dp){
    if(n<0||m<0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(text1[n]==text2[m]) return 1+f(n-1,m-1,text1,text2,dp);
    return dp[n][m]=max(f(n-1,m,text1,text2,dp),f(n,m-1,text1,text2,dp));
}
    int minInsertions(string s) {
        //int n=s.size();
         string text1 =s;
        string text2=s;
        reverse(text2.begin(),text2.end());
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return n-f(n-1,m-1,text1,text2,dp);
    }
};