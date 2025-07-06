class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0,j,k,l;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1&&nums[j]==nums[j-1])continue;
                k=j+1;
                l=n-1;
                while(k<l){
                    long long temp=1LL * nums[i]+nums[j]+nums[k]+nums[l];
                    if(temp==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l&&nums[k-1]==nums[k])k++;
                        while(k<l&&nums[l+1]==nums[l])l--;
                    }
                    else if(temp>target)l--;
                    else k++;
                } 
            }
        }
        return ans;
    }
};