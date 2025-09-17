class Solution {
public:
bool ispali(int i,int j,string s){
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}
    int countSubstrings(string s) {
     int n=s.size();
     int count=0;
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(ispali(i,j,s))count++;
        }
     }  
     return count; 
    }
};