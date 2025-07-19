// User function Template for C++

class Solution {
  public:
  vector<pair<int,int>> bfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&vis){
      queue<pair<int,int>>q;
      q.push({i,j});
      int n=grid.size();
        int m=grid[0].size();
      vis[i][j]=1;
      vector<pair<int,int>> ans;
      ans.push_back({0,0});
      
        int nrow[4]={1,-1,0,0};
        int ncol[4]={0,0,1,-1};

      while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();  
        for(int k=0;k<4;k++){
                int nr=r+nrow[k];
                int nc=c+ncol[k];
                
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]!=0&&vis[nr][nc]==0){q.push({nr,nc});
                    vis[nr][nc]=1;                 
                    ans.push_back({nr-i,nc-j});
                    
                }                                                           
                }
            }
            return ans;
      }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
       set<vector<pair<int,int>>>st;
        int n=grid.size();
        int m=grid[0].size();
        set<vector<int>> ans;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==0){
                    vector<pair<int,int>>temp=bfs(i,j,grid,vis);
                    st.insert(temp);
                }
            }
        }
        return st.size();
    }
};
