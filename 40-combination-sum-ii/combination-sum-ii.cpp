class Solution {
public:
void sum( vector<vector<int>> &ans,vector<int> &ds,int ind,int t,vector<int> &nums){
    
        if(t==0) {ans.push_back(ds);
        return;}
    
    for(int i=ind;i<nums.size();i++){
        if(i>ind  &&  nums[i]==nums[i-1]) continue;
        if(nums[i]>t) break;
        ds.push_back(nums[i]);
        sum(ans,ds,i+1,t-nums[i],nums);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        sum(ans,ds,0,target,candidates);
        return ans;
    }
};