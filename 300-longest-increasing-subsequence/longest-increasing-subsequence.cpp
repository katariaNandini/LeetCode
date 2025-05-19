class Solution {
public:
int f(int ind,int n,int prev,vector<int>& nums,vector<vector<int>> & dp){
    if(ind==n) return 0;
if(dp[ind][prev+1]!=-1) return dp[ind][prev+1]; 
    // take conditon
    int take = 0;
        if(prev == -1 || nums[ind] > nums[prev]) {
            take = 1 + f(ind + 1, n,ind, nums, dp);
        }
      
    
    return dp[ind][prev+1]=max(f(ind+1,n,prev,nums,dp),take); 

}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return f(0,n,-1,nums,dp);
    }
};