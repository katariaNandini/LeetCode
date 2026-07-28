class Solution {
public:
     int recur(string w1,string w2,int l1,int l2,vector<vector<int>> &dp){

        if(l1==w1.length()|| l2==w2.length()){
            if(l1==w1.size()){
                return w2.size()-l2;
            }
            else return w1.size()-l1;
        }

        if(dp[l1][l2]!=-1) return dp[l1][l2];
        if(w1[l1]==w2[l2]) {
        return dp[l1][l2]= recur(w1,w2,l1+1,l2+1,dp);
        }
        int insert=1+recur(w1,w2,l1,l2+1,dp);
        int delele=1+recur(w1,w2,l1+1,l2,dp);
        int replace=1+recur(w1,w2,l1+1,l2+1,dp);
        return dp[l1][l2]= min(insert,min(delele,replace));
     }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return recur(word1,word2,0,0,dp);
    }
};