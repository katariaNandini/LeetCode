class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int k=nums.size();
        vector<int> ans(k, -1);        

        int n=2*k-1;
        for(int i = 2*k-1; i >= 0; i--){
            while(!s.empty()&&s.top()<=nums[i%k]) s.pop();
            if(s.empty())ans[i%k]=-1;
            else ans[i%k]=s.top();
            s.push(nums[i%k]);
        }
        return ans;
    }
};