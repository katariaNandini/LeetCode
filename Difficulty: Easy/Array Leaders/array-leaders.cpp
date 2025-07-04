

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int maxi=-1;
        int n=arr.size();
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(maxi<=arr[i]){ans.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        // Code here
        
    }
};