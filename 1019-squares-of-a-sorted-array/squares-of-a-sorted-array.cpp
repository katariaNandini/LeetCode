class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int l_num=nums[l]*nums[l];
            int r_num=nums[r]*nums[r];
            if(l_num>r_num){ ans.insert(ans.begin(),l_num);
            l++;}
            else {
                ans.insert(ans.begin(),r_num);
                r--;
            }
        }
        return ans;
    }
};