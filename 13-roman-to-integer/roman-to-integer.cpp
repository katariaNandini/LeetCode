class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(i!=0){
            if(s[i]=='V'&&s[i-1]=='I'){
                i=i-1;
                count=count+4;
                continue;
            }
            if(s[i]=='X'&&s[i-1]=='I'){
                i=i-1;
                count=count+9;
                continue;
            }
        
            if(s[i]=='L'&&s[i-1]=='X'){
                i=i-1;
                count=count+40;
                continue;
            }if(s[i]=='C'&&s[i-1]=='X'){
                i=i-1;
                count=count+90;
                continue;
            }
            
            if(s[i]=='D'&&s[i-1]=='C'){
                i=i-1;
                count=count+400;
                continue;
            }
            if(s[i]=='M'&&s[i-1]=='C'){
                i=i-1;
                count=count+900;
                continue;
            }
}
            if(s[i]=='I') count=count+1;
            if(s[i]=='V') count=count+5;
            if(s[i]=='X') count=count+10;
            if(s[i]=='L') count=count+50;
            if(s[i]=='C') count=count+100;
            if(s[i]=='D') count=count+500;
            if(s[i]=='M') count=count+1000;
        }
        return count;
    }
};