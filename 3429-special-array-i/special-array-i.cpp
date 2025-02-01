class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        if(nums[0]%2==0) 
        {for(int i=1;i<n;i++){
         if(i%2==0&&nums[i]%2!=0)   return false;
        else if(i%2!=0&&nums[i]%2==0) return false;

        }}
        else{for(int i=1;i<n;i++){
            if(i%2!=0&&nums[i]%2!=0)   return false;
        else if(i%2==0&&nums[i]%2==0) return false;
         } }
        return true;
    }
};