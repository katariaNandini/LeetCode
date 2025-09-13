// notes in yellow notebook

class Solution {
public:
bool pali(string s ,int start,int end){
    while(start<=end){
        if(s[start]!=s[end])return false;
        start++;
        end--;
    }
    return true;
}
void f(int i,string s, vector<vector<string>> &ans,vector<string>&path){
    if(i==s.size()){
        ans.push_back(path);
        return ;
    }
    for(int a=i;a<s.size();a++){
        if(pali(s,i,a)){
            path.push_back(s.substr(i,a-i+1));
            f(a+1,s,ans,path);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>path;
        f(0,s,ans,path);
        return ans;
    }
};