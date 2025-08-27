class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int left=target-nums[i];
            if(mp.find(left)!=mp.end()){
                return {mp[left],i};
            }
            else mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};