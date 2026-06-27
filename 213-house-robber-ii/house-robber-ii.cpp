class Solution {
public:
int robb(vector<int> & nums,int i,vector<int>& dp){
    if(i<0) return 0;
    if(i==0) return dp[i]=nums[i];
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+robb(nums,i-2,dp);
    int nottake=robb(nums,i-1,dp);
    return dp[i]=max(take,nottake);
}
    int rob(vector<int>& nums) {
int n=nums.size();
if(n==1)return nums[0];
        vector<int> num1=nums;
        num1.erase(num1.begin());
        vector<int> num2(nums.begin(),nums.end()-1);
        vector<int>dp1(n-1,-1);
        vector<int> dp2(n-1,-1);
        int ans1=robb(num2,n-2,dp1);
        int ans2=robb(num1,n-2,dp2);
        return max(ans1,ans2);
    }
};