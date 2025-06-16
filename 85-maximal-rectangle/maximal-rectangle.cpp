class Solution {
public:
 int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int> st;
        int sum=0;
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[i]<arr[st.top()]){
                int ele=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty()?-1:st.top();
                sum=max(sum,arr[ele]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            int nse=n;
            int pse=st.empty()?-1:st.top();
            sum=max(sum,arr[ele]*(nse-pse-1));
        }
        return sum;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int sum=0;
        vector<vector<int>> pesum(n,vector<int>(m));
        for(int i=0;i<m;i++){
            sum=0;
            for(int j=0;j<n;j++){
                sum+=matrix[j][i]-'0';
                if(matrix[j][i]-'0'==0)sum=0;
                pesum[j][i]=sum;
            }
        }
        int maxsum=0;
        for(int i=0;i<n;i++){
            maxsum=max(maxsum,largestRectangleArea(pesum[i]));
        }
        return maxsum;
    }
};