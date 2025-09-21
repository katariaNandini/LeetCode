class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int count1=0;
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            while(sum>goal){
                sum-=nums[i];
                i++;
            }
            count1+=j-i+1;
            j++;
        }
        i=0;
        j=0;
        int count2=0;
        sum=0;
        if (goal == 0) return count1;

        while(j<n){
             sum+=nums[j];
            while(sum>goal-1){
                sum-=nums[i];
                i++;
            }
            count2+=j-i+1;
            j++;
        }
        return count1-count2;
    }
};