class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if (intervals.empty()) return ans;

        // Step 1: Sort intervals by starting time
        sort(intervals.begin(), intervals.end());

        int k=intervals.size();
        int m=intervals[0].size();
        ans.push_back(intervals[0]);
        for(int i=1;i<k;i++){
                   int n=ans.size();
                   if(ans[n-1][1]>=intervals[i][0]){
                    int start=ans[n-1][0];
                    int end =max(ans[n-1][1],intervals[i][1]);
                    ans.pop_back();
                    
                    ans.push_back({start,end});
                   }
                   else         ans.push_back(intervals[i]);
                   }
                   return ans;
    }
};