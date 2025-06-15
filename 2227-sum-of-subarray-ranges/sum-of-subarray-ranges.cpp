typedef long long ll;
class Solution {
public:
vector<int> nge(vector<int>&arr){
    int n=arr.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[st.top()]<=arr[i])st.pop();
        ans[i]=st.empty()?n:st.top();
        st.push(i);
    }
    return ans;
}
vector<int>pgee(vector<int>&arr){
     int n=arr.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]<arr[i])st.pop();
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}
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
    long long subArrayRanges(vector<int>& arr) {
        int n=arr.size();
        vector<int> vnle=nge(arr);
        vector<int> vplee=pgee(arr);
        long long maxsum=0;
        // int mod=1e9+7;
        for(int i=0;i<n;i++){
            long long left=i-vplee[i];
            ll right=vnle[i]-i;
            maxsum=maxsum+(left*right*1LL*arr[i]);

        }

        vector<int> vnse=nse(arr);
        vector<int> vpsee=psee(arr);
        ll sum=0;
        for(int i=0;i<n;i++){
            ll left=i-vpsee[i];
            ll right=vnse[i]-i;
            sum=sum+(left*right*1LL*arr[i]);

        }
        return maxsum-sum;
        
    }
};