class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1=0;
        int t1=0;
        
        if(s.size()==0)return true;
        while(t1<t.size()){
            if(s[s1]==t[t1]){
                s1++;
                
                cout<<s1<<" "<<t1<<endl;
            }
            t1++;
            if(s1>=s.size())return true;
        }
        return false;

    }
};