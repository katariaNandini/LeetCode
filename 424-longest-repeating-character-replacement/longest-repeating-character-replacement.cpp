class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        int maxfreq=0,len=0;
        vector<int> hash(26,0);
        while(j<n){
            hash[s[j]-'A']++;
            maxfreq=max(maxfreq,hash[s[j]-'A']);
            if(j-i+1-maxfreq>k){
                hash[s[i]-'A']--;
                i++;
            }
            int length=j-i+1;
            len=max(len,length);
            j++;


        }
        return len;
    }
};