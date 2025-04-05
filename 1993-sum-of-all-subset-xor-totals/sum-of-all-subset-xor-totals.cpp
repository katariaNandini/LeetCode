class Solution {
public:
int sum=0;
void subset(vector<int>&nums,int ind,int sumi){
    if(ind==nums.size()) {sum+=sumi;
    return;}
    subset(nums,ind+1,sumi^nums[ind]);
    subset(nums,ind+1,sumi);

}
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        subset(nums,0,0);
        return sum;
    }
};