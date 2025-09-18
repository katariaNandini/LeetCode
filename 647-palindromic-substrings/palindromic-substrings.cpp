class Solution {
public:
bool ispali(int i,int j,string s,vector<vector<int>> &dp){
    if(i>j)return true;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j]) {
        return dp[i][j]=ispali(i+1,j-1,s,dp);}
    return dp[i][j]= false;
}
    int countSubstrings(string s) {
       
     int n=s.size();
      vector<vector<int>>dp(n,vector<int>(n,-1));
     int count=0;
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(ispali(i,j,s,dp))count++;
        }
     }
      
     return count; 
    }
};