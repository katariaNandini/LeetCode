class Solution {
  public:
  bool canplace(vector<int>&stalls,int cows,int dist){
      int cnt=1;
      int last=stalls[0];
      for(int i=1;i<stalls.size();i++){
          if(stalls[i]-last>=dist){cnt++;
              last=stalls[i];
          }
          if(cnt>=cows)return true;
          
      }
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int  low=1;
        int high=stalls[n-1]-stalls[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(canplace(stalls,k,mid))low=mid+1;
            else high=mid-1;
        }
        return high;
        // code here
        
    }
};