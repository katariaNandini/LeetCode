class Solution {
public:
int recur(vector<int> nums,int target,int curr,int i,int n,vector<vector<int>>&dp){
    if(i==n){
        if(target-curr==0) return 1;
        else return 0;
    }
    if(dp[i][curr+1000]!=-1) return dp[i][curr+1000];
    int num=nums[i];
    int plus=recur(nums,target,curr+num,i+1,n,dp);
    int minus=recur(nums,target,curr-num,i+1,n,dp);
    return dp[i][curr+1000]=plus+minus;
   
}
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(),vector<int>(target+20001,-1));
        return recur(nums,target,0,0,nums.size(),dp);
    }
};