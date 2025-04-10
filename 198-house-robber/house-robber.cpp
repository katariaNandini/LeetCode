class Solution {
public:
int robber(vector<int> & nums,int ind,vector<int>&dp){
    if(ind==0)return nums[ind];
    if(ind==1) return max(nums[1],nums[0]);
    if(dp[ind]!=-1) return dp[ind];
    int taken=INT_MIN;
    if(ind>1)
     taken= nums[ind]+robber(nums,ind-2,dp);
    int nottaken=robber(nums,ind-1,dp);
    return dp[ind]=max(taken,nottaken);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return robber(nums,n-1,dp);
    }
};
