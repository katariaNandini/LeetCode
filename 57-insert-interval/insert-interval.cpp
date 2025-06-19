class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inte, vector<int>& newi) {
        int n=inte.size();
        vector<vector<int>> in;
      in=inte;
        int start=newi[0];
        int end=newi[1];
        int i=0;
        while(i<in.size()){
           int curStart = in[i][0];
            int curEnd = in[i][1];

            // If no overlap, move forward
            if (end < curStart || start > curEnd) {
                i++;
            } else {
                // Merge intervals
                start = min(start, curStart);
                end = max(end, curEnd);
                in.erase(in.begin() + i); // erase and check this index again
            }
        }
        in.push_back({start,end});
        sort(in.begin(),in.end());
        return in;
        
    }
};