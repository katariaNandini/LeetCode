class Solution {
public:
    bool check(vector<int>& nums) {
        int size=nums.size();
        int f=size-1;
        int count=0;
       for(int i=1;i<size;i++){
        if(nums[i-1]>nums[i])
count++;         
       }
 if(nums[f]>nums[0]){
                count++;
       } 
       return count<=1;
    }
};