class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int z=0;
        int l=0,r=0;
        int maxi=0;
        int count=0;
        while(r<n){
            
            // if(nums[r]==1){
           
            // r++;         }
             if(nums[r]==0){
                z++;
                // r++;
            }
            // else{
            //     while(nums[l]!=0){
            //         l++;
            //     }
            if(z>k){
                if(nums[l]==0){
                    z--;
                }
            l++;
            }
               if(z<=k){
 count=r-l+1;
            maxi=max(count,maxi);

               }
               r++;
            
           
        }
        return maxi;
    }
};