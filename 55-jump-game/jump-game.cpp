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
      vector<bool> dp(n,false);
      dp[n-1]=true;
      for(int i=n-2;i>=0;i--){
        int till=min(i+nums[i],n-1);
        for(int j=i+1;j<=till;j++){
        if(dp[j]) {dp[i]=true;
        break;}        
    }
    // dp[i]=false;
      }

        return dp[0];
    }
};