class Solution {
public:
    string minWindow(string s, string t) {
vector<int> mp(256, 0);
        int n=s.size();
        int m=t.size();
        int i=0,j=0,count=0,minlen=INT_MAX,iindex=-1;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        while(j<n){
            	if(mp[s[j]]>0) {
                count++;}mp[s[j]]--;
               
                    while(count==m){
                        if(minlen>j-i+1){
                            minlen=min(j-i+1,minlen);
                            iindex=i;
                        }
                        mp[s[i]]++;
                        if(mp[s[i]]>=1) {count--;}
                        i++;
                        

                        
                    }
                   
                
                 j++;
        }
       return iindex == -1 ? "" : s.substr(iindex, minlen);
    }
};