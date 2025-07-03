class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=-1;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){ele=nums[i];
            count++;}
            else{
                if(ele==nums[i])count++;
                else count--;
            }
        }
        return ele;
    }
};