// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        int n=bt.size();
        sort(bt.begin(),bt.end());
        int tt=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            tt+=bt[i];
            ans+=tt;
        }
        return ans/n;
    }
};