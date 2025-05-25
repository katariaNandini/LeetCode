class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ch1(26,0),ch2(26,0);
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            ch1[s[i]-'a']++;
            ch2[t[i]-'a']++;
        }
        if(ch1==ch2) return true;
        else return false;
    }
};