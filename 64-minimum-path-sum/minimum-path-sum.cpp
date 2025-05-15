class Solution {
public:
 int findpath(int n,int m,vector<vector<int>>& grid, vector<vector<int>> &dp){
    if(n==0&&m==0) return grid[n][m];
    if(n<0||m<0) return 1e9;
    if(dp[n][m]!=-1) return dp[n][m];
    int left=grid[n][m]+findpath(n-1,m,grid,dp);
    int up=grid[n][m]+findpath(n,m-1,grid,dp);
    return dp[n][m]=min(left,up);
 }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        dp[0][0]=grid[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0) continue;
                int left=INT_MAX;
                int down =INT_MAX;

                if(i>0) down=grid[i][j]+dp[i-1][j];
                if(j>0)  left=grid[i][j]+dp[i][j-1];
                dp[i][j]=min(down,left);
            }
        }
      return  dp[n-1][m-1];
        // return result;
    }
};