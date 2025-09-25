class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=-1,b=-1,c=-1;
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')a=i;
            if(s[i]=='b')b=i;
            if(s[i]=='c')c=i;
            if(a!=-1&&b!=-1&&c!=-1){
                count=count+1+min(a,min(c,b));
            }
        }
        return count;
    }
};