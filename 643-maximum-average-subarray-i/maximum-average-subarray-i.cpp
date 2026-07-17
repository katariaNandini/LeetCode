class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        double maxsum=0;
        
        int n=nums.size();
        for(int j=0;j<k;j++){
            sum+=nums[j];
        }
        maxsum=sum;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxsum=max(sum,maxsum);
        }
        return maxsum/k;
    }
};