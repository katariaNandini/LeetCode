class Solution {
public:
int mini(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp,int n,int m){

    if(j<0||j>=m) return 1e9;
    if(i==0) return matrix[0][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int s=matrix[i][j]+mini(i-1,j,matrix,dp,n,m);
    int ld=matrix[i][j]+mini(i-1,j-1,matrix,dp,n,m);
    int rd=matrix[i][j]+mini(i-1,j+1,matrix,dp,n,m);
    return dp[i][j]=min(s,min(ld,rd));

}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int minim=INT_MAX;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0) dp[0][j]= matrix[0][j];
                else{
                 int s = matrix[i][j] + dp[i - 1][j];
int ld = (j > 0) ? matrix[i][j] + dp[i - 1][j - 1] : INT_MAX;
int rd = (j < m - 1) ? matrix[i][j] + dp[i - 1][j + 1] : INT_MAX;
                 dp[i][j]=min(s,min(ld,rd));}
            }
        }
        for(int i=0;i<m;i++){
            int ans=dp[n-1][i];
            minim=min(ans,minim);
        }
        return minim;
    }
};