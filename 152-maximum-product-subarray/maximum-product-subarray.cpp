class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sufix=1;
        int prefix=1;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prefix*=nums[i];
            sufix*=nums[n-1-i];
            maxi=max(maxi,max(prefix,sufix));
            if(prefix==0)prefix=1;
            if(sufix==0)sufix=1;
        }
        return maxi;
    }
};