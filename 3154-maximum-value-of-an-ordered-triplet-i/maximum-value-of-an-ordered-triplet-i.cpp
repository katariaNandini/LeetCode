class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        // int max1=INT_MIN;
        // int max2=INT_MIN;
        // int m1=-1;
        // int m2=-1;
        // for(int i=0;i<n;i++){
        //     if(max1)
        //     if()
        // }
        long long ans=-1;
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                for(long long k=j+1;k<n;k++){
                    ans=max(ans,(long long)(nums[i] - nums[j]) * nums[k]);

                }
            }
        }
        if(ans<0)return 0;
        return ans;
    }
};