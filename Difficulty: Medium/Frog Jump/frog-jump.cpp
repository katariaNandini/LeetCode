//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int coun(vector<int>& height,vector<int>& vis,int ind){
        if(ind==0) return 0;
        if(vis[ind]!=-1) return vis[ind];
        int left=abs(height[ind]-height[ind-1])+coun(height,vis,ind-1);
       int right=INT_MAX;
        if(ind>1)
         right=abs(height[ind]-height[ind-2])+coun(height,vis,ind-2);
        return vis[ind]= min(left,right);
    }
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int> vis(n+1,-1);
      return   coun(height,vis,n-1);
        
        // Code here
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends