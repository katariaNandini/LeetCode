class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
                sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);
        int n=intervals.size();
        if(n==0||n==1)return intervals;
        for(int i=1;i<n;i++){
            int k=ans.size();
            if(ans[k-1][1]>=intervals[i][0]){
                int start=min(ans[k-1][0],intervals[i][0]);
                int end=max(ans[k-1][1],intervals[i][1]);
                ans.pop_back();
                ans.push_back({start,end});
            }
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
};