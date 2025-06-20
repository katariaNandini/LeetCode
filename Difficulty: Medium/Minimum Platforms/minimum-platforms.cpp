class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int  n=arr.size();
        int a=0;
        int d=0;
        int count=0;
        int maxi=0;
        
        while(a<n&&d<n){
            if(arr[a]<=dep[d]){
                count++;
                maxi=max(count,maxi);
                a++;
            }
            else {count--;
                d++;
            }
        }
        return maxi;
    }
};
