//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n+1,0);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int ls=dp[i-1]+abs(height[i]-height[i-1]);
            int rs=INT_MAX;
            if(i>1)
            rs=dp[i-2]+abs(height[i]-height[i-2]);
            dp[i]=min(rs,ls);
        }
        return dp[n-1];

        // Code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends