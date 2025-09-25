class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        map<int,int> mp;
        int i=0;
        int j=0;
        int n=s.size();
        int count=0;
        while(j<n){
            mp[s[j]]++;
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                }
            if(mp.size()==k)count=max(count,j-i+1);
            j++;
        }
        if(count==0)return -1;
        return count;
    }
};