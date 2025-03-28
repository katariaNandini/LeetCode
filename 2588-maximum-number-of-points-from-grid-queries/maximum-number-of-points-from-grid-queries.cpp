class Solution {
public:
    vector<vector<int>> dir = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int m = grid.size();
        int n = grid[0].size();
        int q = queries.size();
        vector<int> res(q, 0);
        vector<pair<int, int>> sortq;
        
        for (int i = 0; i < q; i++) {
            sortq.push_back({queries[i], i});
        }
        sort(sortq.begin(), sortq.end());

        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        vector<vector<bool>> visit(m, vector<bool>(n, false));
        int point = 0;
        pq.push({grid[0][0], 0, 0});
        visit[0][0] = true;
        
        for (int i = 0; i < q; i++) {
            int qval = sortq[i].first;
            int indx = sortq[i].second;
            
            while (!pq.empty() && pq.top()[0] < qval) {
                int x = pq.top()[1];  // changed from i → x
                int y = pq.top()[2];  // changed from j → y
                pq.pop();
                point++;
                
                for (auto &d : dir) {
                    int i_ = x + d[0];
                    int j_ = y + d[1];
                    
                    if (i_ >= 0 && i_ < m && j_ >= 0 && j_ < n && !visit[i_][j_]) {
                        pq.push({grid[i_][j_], i_, j_});
                        visit[i_][j_] = true;
                    }
                }
            }
            res[indx] = point;
        }
        return res;
    }
};
