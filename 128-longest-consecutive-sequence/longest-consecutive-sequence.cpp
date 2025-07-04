class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp.insert(nums[i]);
        }
        int count=0;
        int maxi=0;
        for(auto it:mp){
            int ele=it;
            if(mp.find(ele-1)==mp.end()){
                count=1;
                ele=ele+1;
                while(mp.find(ele)!=mp.end()){
                        count++;
                        ele++;
                }
                maxi=max(count,maxi);
            }

        }
        return maxi;

    }
};