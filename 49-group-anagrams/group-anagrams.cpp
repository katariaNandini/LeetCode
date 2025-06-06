class Solution {
public:
string sorted(string temp){
    int n=temp.size();
    vector<int> arr(26,0);
    for(int i=0;i<n;i++){
        arr[temp[i]-'a']++;
    }
    string news="";
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            news+=string(arr[i],i+'a');
        }
    }
return news;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            string temp=strs[i];
            string sort=sorted(temp);
            mp[sort].push_back(temp);

        }
        vector<vector<string>>  ans;
        for(auto it:mp){
        ans.push_back(it.second);

        }
        return ans;
    }
};