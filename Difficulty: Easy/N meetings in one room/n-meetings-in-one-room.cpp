class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> mp;
        int n=start.size();
        
        for(int i=0;i<n;i++){
            mp.push_back({end[i],start[i]});
            
        }
        sort(mp.begin(),mp.end());
        int lastindex=mp[0].first;
        int count=1;
        for(int i=1;i<n;i++){
            if(lastindex<mp[i].second){count++;
                lastindex=mp[i].first;
            }
            
        }
        return count;
    }
};