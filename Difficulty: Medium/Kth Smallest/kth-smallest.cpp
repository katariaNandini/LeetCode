// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>hp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            hp.push(arr[i]);
            
            if(hp.size()>k)hp.pop();
        }
        return hp.top();
    }
};