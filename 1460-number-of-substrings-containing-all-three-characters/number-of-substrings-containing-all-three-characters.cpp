class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        int count=0;
        int a=-1,b=-1,c=-1;
        while(i<n){
            if(s[i]=='a') a=i;
            else if(s[i]=='b') b=i;
           else  if(s[i]=='c') c=i;
           if(a!=-1&&b!=-1&&c!=-1){
            int mini=min(a,min(b,c));
            count+=mini+1;
            
           }
           i++;
        }
        return count;
    }
};