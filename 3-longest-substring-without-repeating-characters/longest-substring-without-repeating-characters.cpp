class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        vector<int>mp(256,-1);
        int maxi=0;
        for(int i=0;i<n;i++){
            if(mp[s[i]]!=-1){
             j=max(j,mp[s[i]]+1) ;
            }
            mp[s[i]]=i;
            maxi=max(maxi,i-j+1);
            
        }
        return maxi;
    }
};