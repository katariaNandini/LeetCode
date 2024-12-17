class Solution {
public:
    int f(vector<int> & nums,int ind,int prev,vector<vector<int>> &dp,int n){
        // int n=nums.size();
        // n=n-1;
        if(n==ind) return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int len=0+f(nums,ind+1,prev,dp,n);
        if(prev==-1||nums[ind]>nums[prev])
        len=max(len,1+f(nums,ind+1,ind,dp,n));
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int k=nums.size();
        vector<vector<int>> dp(k,vector<int>(k+1,-1));
        return f(nums,0,-1,dp,k);
    }
};