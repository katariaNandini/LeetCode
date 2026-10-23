class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int r=0;
        int l=0;
        int ans=0;
        int maxi=0;
        while(r<n){
            
            if(mp.find(s[r])==mp.end()){
                mp[s[r]]=r;
                maxi=r-l+1;
                ans=max(maxi,ans);
                
            }
            else{
                int index=mp[s[r]];
                for(int i=l;i<index+1;i++){
                    mp.erase(s[i]);
                }
                l=index+1;
                 mp[s[r]] = r;
// l++;
                }
                r++;
                // cout<<l  <<"  "<<r<<endl;
        //    l++;
        }
        return ans;
    }
};