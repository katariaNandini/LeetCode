class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;
        string ans;
        int n=num.size();
        int i=0;
        while(i<n&&k!=0){
            while(!st.empty()&&st.top()>num[i]&&k!=0){
                st.pop();
                k--;
            }
            st.push(num[i]);   
            i++;      
        }
        while(k>0&&!st.empty()){
            st.pop();
            k--;
        }
        // while(!st.empty()&&st.top()==0) st.pop(); 
            int j = 0;
        

        while(!st.empty()){
        
            ans.insert(0,1,st.top());
            st.pop();
        }
        ans+=num.substr(i,n-i);
        while(j < ans.size() && ans[j] == '0') {
            j++;
        }
                ans = ans.substr(j);


                if(ans.empty()) return "0";

        return ans;

    }
};