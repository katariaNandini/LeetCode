class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        int n1=nums1.size();
        unordered_map<int ,int > mp;
        stack<int> st;
        // if (n2 == 0) {
        //     return vector<int>(n1, -1);
        // }
        for(int i=n2-1;i>=0;i--){
   while(!st.empty() && st.top()<=nums2[i]) {
                st.pop();
            }            if(st.empty())mp[nums2[i]]=-1;
            else mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }

        vector<int> ans(n1,-1);
        for(int i=0;i<n1;i++){
           ans[i]=mp[nums1[i]];
        }
    return ans;
    }
};