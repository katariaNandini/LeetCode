class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){vis[i][j]=2;
                q.push({{i,j},0});}
                else vis[i][j]=0;
            
        }}
        int tm=0;
        int rtra[4]={-1,1,0,0};
        int ctra[4]={0,0,-1,1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);
            for(int i=0;i<4;i++){
                int nr=r+rtra[i];
                int nc=c+ctra[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&grid[nr][nc]==1){
                    q.push({{nr,nc},t+1});
                    vis[nr][nc]=2;

                }
            }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]!=2)return -1;
            }
        }
        return tm;
    }
};