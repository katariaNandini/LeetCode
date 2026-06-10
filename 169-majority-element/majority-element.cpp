class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=nums[0];
        int count=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(num==nums[i])count++;
            else count--;
            if(count==0) {num=nums[i];
            count=1;}

        }
       return num;
        // else return -1;
    }
};