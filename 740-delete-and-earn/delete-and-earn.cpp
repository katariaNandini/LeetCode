class Solution {
public:

    int recur(map<int,int>& mp,map<int,int> &dp,int num){
        if(num==0) return 0;
        int take=0;
        if (dp.find(num)!=dp.end())return dp[num];
        if(mp.find(num)!=mp.end()){
            take=mp[num]+(num>1?recur(mp,dp,num-2):0);
        }
        int nottake=recur(mp,dp,num-1);
        return dp[num]=max(take,nottake);
    }
    int deleteAndEarn(vector<int>& nums) {
     map<int,int> mp;
     int maxi=-1;
     int n=nums.size();
     for(int i=0;i<n;i++){
        mp[nums[i]]+=nums[i];
        maxi=max(nums[i],maxi);
     }   
     map<int,int> dp;

return recur(mp,dp,maxi);
    }
};