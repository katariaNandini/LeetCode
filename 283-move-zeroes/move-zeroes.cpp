class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n&&nums[j]!=0){
            j++;
        }
        if(j==0&&nums[i]!=0)return ;


        
      for(int i=j+1;i<n;i++){
        if(nums[i]!=0){swap(nums[i],nums[j]);
        j++;}
    
        // if(nums[i]==0)j=i;
      }
    }
};