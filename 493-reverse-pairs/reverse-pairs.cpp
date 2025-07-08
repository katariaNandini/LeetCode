class Solution {
public:
int getpairs(vector<int>&arr,int low,int mid,int high){
    int cnt=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high&&(long long)arr[i]>2LL*arr[right])right++;
        cnt+=(right-(mid+1));
    }
    return cnt;
}
 void merge(vector<int>&arr,int low,int mid,int high){
      vector<int> temp;
      int l=low;
      int r=mid+1;
      while(l<=mid&&r<=high){
          if(arr[l]<arr[r]){
              temp.push_back(arr[l]);
              l++;
          }
          else 
          {temp.push_back(arr[r]);
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
  }
    int mergeSort(vector<int>& arr, int l, int r) {
        int cnt=0;
        // code here
        if(l==r) return cnt ;
        int mid=(r+l)/2;
        cnt+=mergeSort(arr,l,mid);
        cnt+=mergeSort(arr,mid+1,r);
        cnt+=getpairs(arr,l,mid,r);
        merge(arr,l,mid,r);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
       return  mergeSort(nums,0,n-1);
        // return cnt;
    }
};