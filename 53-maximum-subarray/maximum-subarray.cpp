class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        // int start=-1,ansstart=-1,ansend=-1;to printing subarary or startindex and endindex of ans;
        for(int i=0;i<n;i++){
            // if(sum==0) start=i;
            sum+=nums[i];
            maxi=max(sum,maxi);
            // if(sum>maxi){
            //     ansstart=start;
            //     ansend=i;
            // }
            if(sum<0)sum=0;
        }
        return maxi;
    }
};