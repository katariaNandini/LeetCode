class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=-1;
        for(int k=0;k<n;k++){
            if(nums[k]==0) {j=k;
            break;}
        }
        // if(n<j+1) return ;
        if(j==-1) return ;
        for(i=j+1;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                nums[i]=0;
                // i++;
                j++;
            }
            // else i++;
        }
// return nus==
            }
};