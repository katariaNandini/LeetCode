class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        // Code Here
         int n=nums.size();
        int high=n-1;
        int low=0;
        int ans=INT_MAX;
        int index=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[high]){
                if(ans>nums[low]){
                ans=min(ans,nums[low]);
                index=low;
                }
                break;
            }
            if(nums[low]<=nums[mid]){
                if(ans>nums[low]){
                ans=min(ans,nums[low]);
                index=low;
                }               
                 low=mid+1;
            }
            else{
                 if(ans>nums[mid]){
                ans=min(ans,nums[mid]);
                index=mid;
                }
                high=mid-1;
            }

        }
        return index;
    }
};
