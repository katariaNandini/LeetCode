class Solution {
public:
void f(vector<int> &nums,vector<int> &ds,vector<int>&mp,vector<vector<int>> &ans){
    if(ds.size()==nums.size()) {ans.push_back(ds);
    return ;}
    // if(ind=nums.size()) return ;
    for(int i=0;i<nums.size();i++){
        if(mp[i]==0){
            mp[i]=1;
            ds.push_back(nums[i]);
            f(nums,ds,mp,ans);
            mp[i]=0;
            ds.pop_back();
        }
        
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int> ds;
        vector<int>mp(n,0);
        f(nums,ds,mp,ans);
        return ans;
    }
};