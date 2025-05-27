class Solution {
public:
    int minAddToMakeValid(string s) {
        int counter=0;
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(')counter++;
            else if(s[i]==')'){
                if(counter>=1)counter--;
                else res++;
            }
        }
        if(counter!=0) res+=counter;
        return res;
    }
};