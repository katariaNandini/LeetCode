class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        map<int,int>mp;
        int n=arr.size();
        int sum=0;
        int len=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if (sum == 0) {
    maxlen = max(maxlen, i + 1);
}
            if(mp.find(sum)!=mp.end()){
                len=i-(mp[sum]);
                maxlen=max(len,maxlen);
            }
            if(mp.find(sum)==mp.end())mp[sum]=i;
        }
        return maxlen;
    }
};