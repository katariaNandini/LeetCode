class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        int n= arr.size();
        stack<int> st;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[i]<=st.top())st.pop();
            if(st.empty()) ans[i]=-1;
            else ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
        
    }
};