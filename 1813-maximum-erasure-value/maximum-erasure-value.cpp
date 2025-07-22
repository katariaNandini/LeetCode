class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int l=0;
        int r=1;
        int sum=nums[0];
        mp[nums[0]]++;
        int maxsum=sum;
        while(l<r&&r<n){
            mp[nums[r]]++;
            sum+=nums[r];
            while(mp[nums[r]]>=2){
                mp[nums[l]]--;
                sum=sum-nums[l];
                l++;
            }
            maxsum=max(maxsum,sum);
            r++;
        }
        return maxsum;
    }
};