class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> match1(256,0);
        vector<int> match2(256,0);
        int n=s.size();
        int counter=1;
        for(int i=0;i<n;i++){
            if(match1[s[i]]==match2[t[i]]){
                match1[s[i]]=match2[t[i]]=counter++;
                // match2[t[i]]=1;
                // counter++;

            }
            // else if(match1[s[i]]==1&&match2[t[i]]==1){
            //     match1[s[i]]=1;
            //     match2[t[i]]=1;
            // }
            // else if (match1[s[i]]==0&&match2[t[i]]==1)return false;
            // else if (match1[s[i]]==1&&match2[t[i]]==0)return false;
            else return false;
        }
        return true;
    }
};