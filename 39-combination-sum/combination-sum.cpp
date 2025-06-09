class Solution {
public:
void f(vector<int>& c,int t,int i,int n,vector<int> &ds,  vector<vector<int>> &ans){
    if(i==n) {
        if(t==0) ans.push_back(ds);
        return ;
    }
    if (c[i]<=t ) {
    ds.push_back(c[i]);
    f(c,t-c[i],i,n,ds,ans);
    ds.pop_back();}
    f(c,t,i+1,n,ds,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        int i=0,n=candidates.size();
        vector<vector<int>> ans;
        f(candidates,target,i,n,ds,ans);
        return ans;
    }
};