typedef pair<int,pair<int,int>> pi;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pi>pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];

            int dist=x*x+y*y;
            pq.push({dist,{x,y}});

            if(pq.size()>k)pq.pop();
        } 
        vector<vector<int>> ans;
       while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};