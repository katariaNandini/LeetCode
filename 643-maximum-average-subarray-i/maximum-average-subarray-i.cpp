class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res=INT_MIN;
        double cur=0;
        double sum=0;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            if(i<k){
                sum+=nums[i];
            }
            if(i>=k){
                cur=sum/k;
                cout<<sum<<endl;
                res=max(res,cur);
                sum-=nums[i-k];
                cout<<nums[i-k];
                sum+=nums[i];
            }

        }
        cur=sum/k;
        res=max(res,cur);
        return res;
    }
};