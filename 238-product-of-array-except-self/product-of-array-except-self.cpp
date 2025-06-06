class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,1),right(n,1);
        for(int i=0;i<n;i++){
            if(i==0)left[i]=1;
            if(i==0) right[n-i-1]=1;
            else {
                left[i]=left[i-1]*nums[i-1];
                right[n-i-1]=right[n-i]*nums[n-i];
            }
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};