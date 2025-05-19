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
        vector<vector<int>>prev(2,vector<int>(3,0));
        vector<vector<int>>cur(2,vector<int>(3,0));

//    
for(int ind=n-1;ind>=0;ind--){
            for(int buy=1;buy>=0;buy--){
         for (int k = 0; k < 2; k++) {
            
             if(buy)
   prev[buy][k]=max((-prices[ind]+ cur[0][k] ),(0+ cur[1][k] ));
    
    else  prev[buy][k]=max((prices[ind]+ cur[1][k+1] ),(0+cur[0][k] ));

      
    }}
    cur=prev;
    }
    
      return cur[1][0];}
};