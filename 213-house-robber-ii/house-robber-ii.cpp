class Solution {
public:
int robber(vector<int>& nums) {
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
        return dp[n-1];}
    int rob(vector<int>& nums) {
         vector<int> temp1;
         vector<int>temp2;
         int n=nums.size();
         if(n==1) return nums[0];
         for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);

         }
         int rob1=robber(temp1);
         int rob2=robber(temp2);
         return max(rob1,rob2);

    }
};