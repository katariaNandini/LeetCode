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
        vector<int> dp(n,0);
        dp[0]=nums[0];
        if(n>=2)
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            int taken=dp[i-2]+nums[i];
            int nottaken=dp[i-1];
            int cur=max(taken,nottaken);
            dp[i]=cur;
        }
        return dp[n-1];
    }
};
