class Solution {
public:
bool f(vector<int>&nums,int ind,vector<int>&dp){
    if(ind>=nums.size()-1) return true;
    if(dp[ind]!=-1) return dp[ind];
    for(int i=1;i<=nums[ind];i++){
        if(f(nums,ind+i,dp))return dp[ind]=true;        
    }
    return dp[ind]=false;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
      vector<int> dp(n,-1);
        return f(nums,0,dp);
    }
};