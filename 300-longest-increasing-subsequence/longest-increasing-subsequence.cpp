class Solution {
public:
int recur(vector<int>& nums,int i,int j,vector<vector<int>>& dp){
    
    if(i==nums.size())return 0;
    if(dp[i][j+1]!=-1)return dp[i][j+1];

    int take=0;
    if(j==-1||nums[j]<nums[i])take=1+recur(nums,i+1,i,dp);
    int nottake=recur(nums,i+1,j,dp);
    return dp[i][j+1]=max(nottake,take);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));

        return recur(nums,0,-1,dp);
    }
};