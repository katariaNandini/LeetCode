class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         map<int,int> mp;
        int n=nums.size();
        mp[0]=1;
        int count=0,pr=0;
        for(int i=0;i<n;i++){
            pr+=nums[i];
            int remove=pr-goal;
            count+=mp[remove];
            mp[pr]+=1;
        }
            return count;
    }
};