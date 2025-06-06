class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
vector<pair<int,string>>copy;
// we are pusing  a string with its index in copy
// next step i am thinking to sort each string 
// then sort all the stirngs 
// then match 
// and put in ans but in ans i will put string based to its inidex and then taht string from strs
        for(int i=0;i<n;i++){
            copy.push_back({i,strs[i]});
        }
        for(int i=0;i<n;i++){
            sort(copy[i].second.begin(),copy[i].second.end());
        }
        sort(copy.begin(),copy.end(),[](const pair<int,string>&a,const pair<int,string>&b){
            return a.second<b.second;
        });
        vector<string> temp;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
                    temp.push_back(strs[copy[i].first]);
            // If it's the last element or the next one is different, push temp to ans
            if (i == n - 1 || copy[i].second != copy[i + 1].second) {
                ans.push_back(temp);
                temp.clear();
            }}
    return ans;
    }
};