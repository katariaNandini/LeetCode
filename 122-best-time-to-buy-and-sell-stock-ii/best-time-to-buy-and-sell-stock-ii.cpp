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
vector<int> prev(2,0),cur(2,0);
//         if(ind==n&&buy) return 0;
// if(ind==n&&!buy) return prices[ind];
cur[1]=0;
cur[0]=prices[n-1];
        for(int ind=n-2;ind>=0;ind--){
            for(int buy=1;buy>=0;buy--){
                 if(buy){
         prev[buy]=max((-prices[ind]+ cur[0] ),(0+ cur[1] ));
    }
    else prev[buy]=max((prices[ind]+ cur[1] ),(0+cur[0] ));

            }
            cur=prev;
        }
        return prev[1];
        
    }
};