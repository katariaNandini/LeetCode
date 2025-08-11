class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
           // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int lb=-1;
        while(low<=high){
        int mid = low + (high - low) / 2;
            if(arr[mid]>target){
                // if(lb==-1)lb=mid;
                // if(arr[lb]<arr[mid])lb=mid;
                lb=mid;
                high=mid-1;
               
            }
            else  low=mid+1;
        }
        if(lb==-1)return n;
        else return lb;
    }
};
