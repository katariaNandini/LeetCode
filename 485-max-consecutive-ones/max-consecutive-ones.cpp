class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count1,count2;
        vector<int> arr;
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            count1++;
           else {
            count2=max(count1,count2);
            count1=0;
           }
        }
        count2=max(count1,count2);
        
        return count2;
    }
};