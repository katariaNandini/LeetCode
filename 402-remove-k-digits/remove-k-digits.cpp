class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack<char> st;
        int n=nums.size();
        if(k==n) return "0";
        for(int i=0;i<n;i++){
            while(!st.empty()&&nums[i]<st.top()&&k!=0){
                st.pop();
                k--;
            }
            st.push(nums[i]);
        }
        while(k!=0){
            st.pop();
            k--;
        }
        int m=st.size();
        string ans="";
        for(int i=0;i<m;i++){
            
            ans.push_back(st.top());
            st.pop();

        }
        
        reverse(ans.begin(),ans.end());
        while(ans[0]=='0')ans.erase(0, 1);
        if (ans.size()==0) return "0";
        return ans;
    }
};