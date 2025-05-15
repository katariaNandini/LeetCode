//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
//   bool f(int i,int target ,vector<int>& arr,vector<vector<int>> dp){
//       if(target==0) return true;
//       if(i==0){
//           if(target==arr[0]) return true;
//           else return false;
//       }
//       if(dp[i][target]!=-1) return dp[i][target]; 
//       bool take=false;
//      if(arr[i]<=target) 
//       take=f(i-1,target-arr[i],arr,dp);
//       bool nottake=f(i-1,target,arr,dp);
//       return dp[i][target]=(take||nottake);
//   }
    bool isSubsetSum(vector<int>& arr, int sum) {
      int n=arr.size();
vector<vector<bool>> dp(n, vector<bool>(sum + 1, 0));
for(int i=0;i<n;i++){
    dp[i][0]=true;
}
if (arr[0] <= sum) dp[0][arr[0]] = true;
for(int i=1;i<n;i++){
    for(int j=1;j<=sum;j++){
        bool nottake = dp[i-1][j];
        bool take=false;
        if(arr[i]<=j) take=dp[i-1][j-arr[i]];
        dp[i][j]=nottake|take;
    }
}
      return dp[n-1][sum];
      // code here
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends