class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int z=0;
        int l=0,r=0;
        int maxi=0;
        int count=0;
        while(r<n){
            
            if(nums[r]==1){
           
            r++;
            }
           else  if(nums[r]==0&&z<k){
                z++;
                r++;
            }
            else{
                while(nums[l]!=0){
                    l++;
                }
            l++;
                z--;
            }
            count=r-l;
            maxi=max(count,maxi);
        }
        return maxi;
    }
};