class Solution {
  public:

bool f(vector<int>&nums,int target,int &count,int n,int i,vector<vector<int>>& dp){
    if(i==n) {
        if(target==0) return true; 
       else  return false;}
       
       if(dp[i][target]!=-1) return  dp[i][target];
    // take condition
bool taken = false;
        if (target - nums[i] >= 0) {
            taken = f(nums, target - nums[i],count, n, i + 1, dp);
        }    bool fnott=f(nums,target,count,n,i+1,dp);
    return dp[i][target]= (taken||fnott);
    //  return dp[i][target];
}
 
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        int count=0;
       return  f(arr,k,count,n,0,dp);
        // if(count==0) return false;
        // else return true;
        // Code here
        
    }
};