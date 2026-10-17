class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int> ans;
        unordered_map<char,int>mp;
        for(auto it:s1){
            mp[it]++;
        }
        int var=s1.size();
        int l=0;
        int r=0;
        int n=s2.size();
        while(r<s2.size()){
           if(mp.find(s2[r])!=mp.end()){
            if(mp[s2[r]]>0){
                var--;
               
            }
             mp[s2[r]]--;
            }
            if((r-l+1)>s1.size()){
            if(mp.find(s2[l])!=mp.end()){
            if(mp[s2[l]]>=0){
                var++;
               
            }
             mp[s2[l]]++;
            }
            l++;
            }
          

           if(var==0) {
            ans.push_back(l);
            ;}
           r++;
        }
        return ans;
    }
};