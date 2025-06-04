class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map<int,int> mp;
        vector<pair<int,int>> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp.push_back({nums[i],i});
        }
        sort(mp.begin(),mp.end());
        int i=0,j=n-1;
vector<int> ans;
        while(i<j){
            if(mp[i].first+mp[j].first==target) return {mp[i].second,mp[j].second};
            else if(mp[i].first+mp[j].first>target)j--;
            else i++;
        }
        return {-1,-1};
    }
};