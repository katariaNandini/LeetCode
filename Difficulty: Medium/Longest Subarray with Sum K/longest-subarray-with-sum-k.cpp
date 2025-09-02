class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        map<int,int> mp;
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(k==sum){
                maxi=max(i+1,maxi);
                continue;
            }
            int left=sum-k;
            if(mp.find(left)!=mp.end())maxi=max(maxi,i-mp[left]);
            if(mp.find(sum)==mp.end())mp[sum]=i;
        }
        return maxi;
    }
};