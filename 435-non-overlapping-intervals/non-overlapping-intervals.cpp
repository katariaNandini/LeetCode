class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {

          vector<pair<int,int>> mp;
        int n=in.size();
        
        for(int i=0;i<n;i++){
            mp.push_back({in[i][1],in[i][0]});
            
        }
        sort(mp.begin(),mp.end());
        int lastindex=mp[0].first;
        int count=1;
        for(int i=1;i<n;i++){
            if(lastindex<=mp[i].second){count++;
                lastindex=mp[i].first;
            }
            
        }
        return mp.size()- count;
    }
};