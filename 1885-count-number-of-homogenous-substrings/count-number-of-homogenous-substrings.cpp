class Solution {
public:
    int countHomogenous(string s) {
        int i=0;
        int j=0;
        int MOD = 1e9+7;
        long long count=0;
        int n=s.size();
        unordered_map<char,int>mp;
        while(i<n&&j<n){
            mp[s[j]]++;
            while(mp.size()>1){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            // if(mp.size()==1)
            // cout<<mp[s[j]];
                count+=mp[s[j]];
                count=count%MOD;
            
            j++;
        }
        return count;
    }
};