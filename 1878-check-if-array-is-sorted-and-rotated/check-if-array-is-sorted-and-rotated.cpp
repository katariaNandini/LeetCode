class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1||n==2)return true;
        
        int big=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])big++;
        }
        if(nums[n-1]>nums[0])big++;
        if(big>1)return false;
        else return true;
    }
};