class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int hover=0;
        while(hover<=end){

            if(nums[hover]==0){
                swap(nums[hover],nums[start]);
                start++;
                hover++;
            }
            else if(nums[hover]==2){
               swap(nums[hover],nums[end]);
                end--;
            }
            else{
               hover++;
            }
        }
    }
};
