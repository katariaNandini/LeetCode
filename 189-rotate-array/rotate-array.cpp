class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        
        int n=arr.size();
        k=k%n;
        vector<int> temp(k+1);
        int l=0;
        for(int i=n-k;i<n;i++){
            temp[l]=arr[i];
            l++;
        }
        for(int i=n-k-1;i>=0;i--){
          arr[i+k]=arr[i];
        }
        for(int i=0;i<k;i++){
            arr[i]=temp[i];
        }
    }
};


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         int n=nums.size();
//         vector<int> ans(n);
//         k=k%n;
//         int l=0;
//         for(int i=n-k;i<n;i++){
//             ans[l]=nums[i];
//             l++;
//         }
//         for(int i=0;i<n-k;i++){
//             ans[l]=nums[i];
//             l++;
//         }
// nums=ans;

//     }
// };


