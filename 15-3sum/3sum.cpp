class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int n=nums.size();
        vector<vector<int>> ans;

        for(int i=0; i<=n-2;i++){
            if(i>0&& nums[i]==nums[i-1]) continue;
            // k=i+1;
            // for(int j=k;j<=end-1;j++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                if((nums[left]+nums[right]+nums[i])==0){
                    vector<int> temp;
                    temp.push_back(nums[left]);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[right]);          
          ans.push_back(temp);
          left++;
          right--;
          while(left<right && nums[left]==nums[left-1])left++;
          while(left<right && nums[right]==nums[right+1])right--;


                }
                else if((nums[left]+nums[right]+nums[i])<0) left++;
                else right--;


            }
          
        }
          return ans;
    }
};