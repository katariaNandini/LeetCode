class Solution {
  public:
    int func(int cnt,vector<int>&mat){
       int low=0;
       int high=mat.size()-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(mat[mid]>cnt)high=mid-1;
           else low=mid+1;
       }
       return low;
    }
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int high=1e9;
        int low=1;
        while(low<=high){
            int mid=(low+high)/2;
            int cnt=0;
            for(int i=0;i<mat.size();i++){
                cnt+=func(mid,mat[i]);
            }
            if(cnt<=n*m/2)low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};
