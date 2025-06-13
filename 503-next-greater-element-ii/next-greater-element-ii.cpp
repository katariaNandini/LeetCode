class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>ans(2*n,-1);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty()&&nums[i]>=st.top())st.pop();
            if(st.empty())ans[i]=-1;
            else ans[i]=st.top();
            st.push(nums[i]);
        }   return vector<int>(ans.begin(), ans.begin() + n);
    }
};