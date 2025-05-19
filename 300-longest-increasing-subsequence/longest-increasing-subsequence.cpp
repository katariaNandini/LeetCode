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
        // vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        vector<int> previ(n+1,0),cur(n+1,0);
    for(int ind=n-1;ind>=0;ind--){
        for(int prev=ind-1;prev>=-1;prev--){
            // take conditon
                int take = 0;
                    if( prev == -1 ||nums[ind] > nums[prev]) {
                        take = 1 +cur[ind+1];
                    }
                
                
                previ[prev+1]=max(cur[prev+1] ,take); 
                    }
         cur=previ;           
    }
        return cur[0];
        // return f(0,n,-1,nums,dp);
    }
};