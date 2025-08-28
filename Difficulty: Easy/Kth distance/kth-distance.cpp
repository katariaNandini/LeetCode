// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        int n=arr.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            if(st.find(arr[i])!=st.end())return true;
            
            st.insert(arr[i]);
            if(i>=k){
                st.erase(arr[i-k]);
            }
        }
        return false;
    }
};