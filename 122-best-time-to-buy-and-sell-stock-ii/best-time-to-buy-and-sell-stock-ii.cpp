class Solution {
public:
int f(int ind,int buy,vector<int> &prices,int n,vector<vector<int>>&dp){
if(ind==n&&buy) return 0;
if(ind==n&&!buy) return prices[ind];
if(dp[ind][buy]!=-1) return dp[ind][buy]; 
    if(buy){
     return    dp[ind][buy]=max((-prices[ind]+f(ind+1,0,prices,n,dp)),(0+f(ind+1,1,prices,n,dp)));
    }
    return dp[ind][buy]=max((prices[ind]+f(ind+1,1,prices,n,dp)),(0+f(ind+1,0,prices,n,dp)));

}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int> (2,-1));
        return f(0,1,prices,n-1,dp);
        
    }
};