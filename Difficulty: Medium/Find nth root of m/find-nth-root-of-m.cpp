class Solution {
  public:
  int f(int n,int m){
      int ans=m;
      for(int i=1;i<n;i++){
         ans*=m;
      }
      return ans;
  }
    int nthRoot(int n, int m) {
        // Code here
        int high=m;
        int low=1;
        while(low<=high){
            int mid=(low+high)/2;
            if(f(n,mid)==m)return mid;
            if(f(n,mid)>m)high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};