// class Solution {
  public:
  bool issafe(int node,vector<int>&color,vector<vector<int>>&graph,int N,int col){
      for(int k=0;k<N;k++){
          if(k!=node&&graph[node][k]==1&&color[k]==col)return false;
          
      }
      return true;
  }
  bool solve(int node,vector<int>&color,int m,int N,vector<vector<int>>&graph){
      if(node==N)return true;
      for(int i=1;i<=m;i++){
          if(issafe(node,color,graph,N,i)){
              color[node]=i;
              if(solve(node+1,color,m,N,graph))return true;
              color[node]=0;
          }
      }
      return false;
  }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        
    vector<int> color(v,0);
    vector<vector<int>> graph(v, vector<int>(v, 0));
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            graph[u][v] = 1;
            graph[v][u] = 1;  // because undirected graph
        }

    if(solve(0,color,m,v,graph))return true;
    return false;
    
    // code here
        
    }
};