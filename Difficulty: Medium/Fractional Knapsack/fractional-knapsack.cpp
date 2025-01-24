//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
struct cap{
    int value;
    int weight;
    double frac;
};

class Solution {
  public:
  bool static comp(struct cap i1,cap i2){
      if(i1.frac>i2.frac) return true;
      return false;
  }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
      int n=wt.size();
       struct cap item[n];
       double ans=0.0;
       for(int i=0;i<n;i++){
           item[i].value=val[i],item[i].weight=wt[i],item[i].frac=(double)val[i]/wt[i];
       }
       sort(item,item+n,comp);
       for( int i=0;i<n;i++){
           if(item[i].weight<=capacity){
               ans+=item[i].value;
               capacity-=item[i].weight;
           }
           else if(capacity!=0&&item[i].weight>capacity){
                ans += item[i].value * ((double)capacity / item[i].weight);
              break;
           }
           else break;
       }
       return ans;
        // Your code here
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends