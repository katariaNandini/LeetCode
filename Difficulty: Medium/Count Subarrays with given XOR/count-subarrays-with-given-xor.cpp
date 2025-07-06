class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        int n=arr.size();
        mp[0]=1;
        int xoro=0;
        int ans=0;
        for(int i=0;i<n;i++){
            xoro=xoro^arr[i];
            if(mp.find(xoro^k)!=mp.end())ans=ans+mp[xoro^k];
            mp[xoro]++;
        }
        return ans;
    }
};