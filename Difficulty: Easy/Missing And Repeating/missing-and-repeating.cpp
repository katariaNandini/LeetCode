class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int repeat=-1;
        int miss=-1;
      for(int i=0;i<n-1;i++){
          if(arr[i]==arr[i+1])repeat=arr[i];
          else if(arr[i+1]!=arr[i]+1) miss=arr[i]+1;
      }
      if(arr[0]!=1) miss=1;
      if(arr[n-1]!=n)miss=n;
        return {repeat,miss};
    }
};