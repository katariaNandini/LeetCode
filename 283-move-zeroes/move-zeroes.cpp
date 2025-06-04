class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count0=0;
        // int n=nums.size();
        
        for(int i=0;i<nums.size();){
            if(nums[i]==0){
                count0++;
                nums.erase(nums.begin()+i);
            
            }
           else  i++;
        }
        for(int i=0;i<count0;i++){
            nums.push_back(0);
        }
        // return nums;
    }
};