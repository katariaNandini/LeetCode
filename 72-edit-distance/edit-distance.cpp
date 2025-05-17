class Solution {
public:
int f(int i,int j,string s1,string s2){
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(s1[i]==s2[j])return f(i-1,j-1,s1,s2);
    return min((1+f(i,j-1,s1,s2)),min((1+f(i-1,j,s1,s2)),(1+f(i-1,j-1,s1,s2))));
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        vector<int> prev(m+1,0),cur(m+1,0);
        for(int i=0;i<=m;i++) prev[i]=i;
        // for(int i=0;i<=n;i++)dp[i][0]=i;
        for(int i=1;i<=n;i++){
            cur[0] = i;
            for(int j=1;j<=m;j++){
                 if(word1[i-1]==word2[j-1])cur[j] =prev[j-1];
                 else cur[j]= min((1+prev[j]),min((1+prev[j-1]),(1+cur[j-1])));   
            }
            prev=cur;
        }
    return   prev[m];
    }
};