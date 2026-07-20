class Solution {
public:
void recur(vector<int> & nums,vector<vector<int>> & ans,vector<int> & temp,int i){
    if(nums.size()==i){

   ans.push_back(temp);
   return ;
    }
    temp.push_back(nums[i]);
    recur(nums,ans,temp,i+1);
    temp.pop_back();
    recur(nums,ans,temp,i+1);

// return 0;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
       recur(nums,ans,temp,0);
       return ans;
    }
};