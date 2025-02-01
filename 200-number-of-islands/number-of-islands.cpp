class Solution {
public:
void bfs(vector<vector<char>>& grid,vector<vector<int>> &visit,int row,int col){
    visit[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int rown[4]={1,-1,0,0};
    int coln[4]={0,0,-1,1};
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
        int rownum=row+rown[i];
        int colnum=col+coln[i];
               if (rownum >= 0 && rownum < grid.size() && colnum >= 0 && colnum < grid[0].size() &&
    grid[rownum][colnum] == '1' && visit[rownum][colnum] == 0){
                    visit[rownum][colnum]=1;
                    q.push({rownum,colnum});
                }
    }}
        }

    

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0&&grid[i][j]=='1'){
                    cnt++;
                    bfs(grid,vis,i,j);
                }
            }
        }
        return cnt;
    }
};