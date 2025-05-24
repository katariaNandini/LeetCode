class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int sum=0,i=0,j=0,count1=0;
        if (goal < 0) return 0;
        while(j<n){
            sum+=nums[j];
            while(sum>goal){
                sum-=nums[i];
                i++;
            }
            count1+=j-i+1;
            j++;
        }
        int i2 = 0, j2 = 0, sum2 = 0, count2 = 0;
        if (goal == 0) return count1;
    while(j2<n){
            sum2+=nums[j2];
            while(sum2>goal-1){
                sum2-=nums[i2];
                i2++;
            }
            count2+=j2-i2+1;
            j2++;
        }
        return count1-count2;
    }
};