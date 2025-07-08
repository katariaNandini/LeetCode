class Solution {
  public:
//   int cnt=0;
 int merge(vector<int>&arr,int low,int mid,int high){
      vector<int> temp;
      int l=low;
      int r=mid+1;
      int cnt=0;
      while(l<=mid&&r<=high){
          if(arr[l]<=arr[r]){
              temp.push_back(arr[l]);
              l++;
          }
          else 
          {
              cnt+=mid-l+1;
              temp.push_back(arr[r]);
          r++;}
      }
      while(l<=mid){
           temp.push_back(arr[l]);
              l++;
      }
      while(r<=high){
          temp.push_back(arr[r]);
          r++;
      }
      for(int i=low;i<=high;i++){
          arr[i]=temp[i-low];
      }
      return cnt;
  }
    int mergeSort(vector<int>& arr, int l, int r) {
        // code here
         int cnt=0;
        if(l==r) return cnt;
        int mid=(r+l)/2;
       
      cnt+=  mergeSort(arr,l,mid);
       cnt+= mergeSort(arr,mid+1,r);
       cnt+= merge(arr,l,mid,r);
       return cnt;
    }
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        int n=arr.size();
        // Your Code Here
      return  mergeSort(arr,0,n-1);
        //  cnt;
    }
};