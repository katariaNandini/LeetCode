#include <algorithm>
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long maxdiff=INT_MIN;
        long long maxx=INT_MIN;
        long long ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,maxdiff*nums[i]);
            maxdiff=max(maxdiff,maxx-nums[i]);
            maxx=max(maxx,(long long)nums[i]);

        }
        if(ans<0) return 0;
        return ans;
    }
};