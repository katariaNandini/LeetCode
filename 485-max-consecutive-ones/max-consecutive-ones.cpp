class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count1,count2;
        vector<int> arr;
        count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            count1++;
           else 
           { arr.push_back(count1);
            count1=0;}
        }
        arr.push_back(count1);
int max = *max_element(arr.begin(),arr.end());
        return max;
    }
};