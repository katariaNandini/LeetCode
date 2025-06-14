class Solution {
public:
vector<int> nse(vector<int>&arr){
    int n=arr.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[st.top()]>=arr[i])st.pop();
        ans[i]=st.empty()?n:st.top();
        st.push(i);
    }
    return ans;
}
vector<int>psee(vector<int>&arr){
     int n=arr.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]>arr[i])st.pop();
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> vnse=nse(arr);
        vector<int> vpsee=psee(arr);
        int sum=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            int left=i-vpsee[i];
            int right=vnse[i]-i;
            sum=(sum+(left*right*1LL*arr[i])%mod)%mod;

        }
        return sum;
    }
};