class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)j=0;
            else j++;
            maxi=max(maxi,j);

        }
        return maxi;












        // int maxi=0;
        // int count=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==1)count++;
        //     else if(nums[i]==0){
        //         maxi=max(maxi,count);
        //         count=0;
        //     }
        // }
        //         maxi=max(maxi,count);
        
        // return maxi;
        
    }
};