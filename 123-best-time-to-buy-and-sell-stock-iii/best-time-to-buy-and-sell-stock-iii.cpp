class Solution {
public:
int f(int ind,int buy,vector<int> &prices,int n,int c, vector<vector<vector<int>>>&dp){
          if (ind == n || c == 2) return 0;

if(dp[ind][buy][c]!=-1) return dp[ind][buy][c]; 
    if(buy){
     return  dp[ind][buy][c]=  max((-prices[ind]+f(ind+1,0,prices,n,c,dp)),(0+f(ind+1,1,prices,n,c,dp)));
    }
    return dp[ind][buy][c]=max((prices[ind]+f(ind+1,1,prices,n,c+1,dp)),(0+f(ind+1,0,prices,n,c,dp)));

}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,prices,n,0,dp);
        
    }
};