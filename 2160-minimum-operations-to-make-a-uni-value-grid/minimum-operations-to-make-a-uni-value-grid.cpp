class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        for(auto & row:grid){
            for(int num:row){
                nums.push_back(num);
            }
        }
        int mindiff=INT_MAX;
        // int value=0;
        int n=nums.size();
                nth_element(nums.begin(),nums.begin()+n/2,nums.end());

        // for(int i=0;i<n;i++){
        //     int maxdiff=mindiff;
        //     mindiff=0;
        //     for(int j=0;j<n;j++){
        //         mindiff+=abs(nums[j] - nums[i]);
            

        //     }  
        //         if(mindiff<maxdiff){
        //             maxdiff=mindiff;
        //             value=nums[i];
        //         }
          

        // }
                int value = nums[n / 2]; // Using median instead of iterating over all elements

        int op=0;
        int mod=nums[0]%x;
        for(int i=0;i<n;i++){
            if(mod!=nums[i]%x) return -1;
            if(nums[i]!=value){
                op+=abs(nums[i]-value)/x;
            }
        }
        return op;
    }
};