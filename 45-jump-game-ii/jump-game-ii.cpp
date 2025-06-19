class Solution {
public:
int f(vector<int>&nums,int ind,vector<int>&dp){
    if(ind>=nums.size()-1) return 0;
    // if(dp[ind]!=-1) return dp[ind];
    int num=INT_MAX;
    if(dp[ind]!=-1) return dp[ind];
    int maxindex=min(ind+nums[ind],(int)(nums.size()-1));
    for(int i=ind+1;i<=maxindex;i++){
        int temp=f(nums,i,dp);  
        if (temp != INT_MAX) {
                num = min(num, 1 + temp);}
    }
    return dp[ind]=num;
    
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return f(nums,0,dp);
    }
};