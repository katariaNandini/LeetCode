class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
             if(grid.empty()) return 0;

     int n=grid.size();
     int m=grid[0].size(); 
vector<vector<int>> vis(n, vector<int>(m, 0));
     queue<pair<pair<int,int>,int>>q;
     int cntfr=0;

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                vis[i][j]=2;
                q.push({{i,j},0});
            }
            else vis[i][j]=0;
            if(grid[i][j]==1) cntfr++;
        }}
 int rw[] = {-1, 0, +1, 0};  // Row movement for 4 directions (up, right, down, left)
        int cw[] = {0, 1, 0, -1};
        int tm=0;
        int cnt=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
                    tm=max(t,tm);

            for(int i=0;i<4;i++){
                int nr=r+rw[i];
                int nc=c+cw[i];
                if(nr<n && nr>=0 && nc<m &&nc>=0 && vis[nr][nc]==0 && grid[nr][nc]==1){
                    q.push({{nr,nc},t+1});
                    vis[nr][nc]=2;
                    cnt++;
                } 
            }

        }
        if(cnt!=cntfr) return -1;
        return tm;
     }
    
};