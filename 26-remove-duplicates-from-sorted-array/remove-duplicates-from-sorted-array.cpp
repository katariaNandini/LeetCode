class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n==0) return 0;
        nums[count]=nums[0];
        count++;
        for(int i=1;i<n;i++){
            
            if( nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                                count++;

                }
                

        }
        nums.resize(count);
        return count;
    }
};