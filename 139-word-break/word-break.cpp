class Solution {
public:
    bool f(int index,unordered_map<string,bool> &dict,vector<int> &dp,string&s){
        if(index>=s.size()) return 1;
        if(dp[index]!=-1)return dp[index];
        string curr="";
        for(int i=index;i<s.size();i++){
            curr.push_back(s[i]);
            if(dict[curr]&& f(i+1,dict,dp,s)){
                return dp[index]=1;
            }
        }            return dp[index]=0;

    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,bool> dict;
        for(auto&word :wordDict){
            dict[word]=true;
        }
        vector<int> dp(s.size(),-1);
       return f(0,dict,dp,s);
    }
};