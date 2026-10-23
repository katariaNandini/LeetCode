class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            vector<int> temp;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int target=nums[i]+nums[j]+nums[k];
                // cout<<nums[i]<<"     "<<nums[j]<<"    "<<nums[k]<<endl;
                if(target==0){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    st.insert(temp);
                    j++;
                    k--;
                }
                else if(target>0) k--;
                else j++;
                temp.clear();
            }
        }     
        for(auto it:st){
            ans.push_back(it);
        }   
        return ans;
    }
};