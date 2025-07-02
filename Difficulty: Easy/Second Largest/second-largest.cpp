class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int secmax=-1;
        int max=arr[0];
        int n=arr.size();
        if(n==1)return -1;
        for(int i=1;i<n;i++){
            if(arr[i]<max&&arr[i]>secmax)secmax=arr[i];
          if(arr[i]>max){
              secmax=max;
              max=arr[i];
          }  
        }
        return secmax;
    }
};