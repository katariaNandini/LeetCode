class Solution {
public:
 int climbStairs(int n) {
    vector<int> dp(n+1,-1);
    return help(n,dp);
     }
    int help(int n,vector<int> & dp) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
    dp[n]=help(n-1,dp)+help(n-2,dp);
        //int left=climbStairs(n-1);
        //int right=climbStairs(n-2);
        return dp[n];
    }
};