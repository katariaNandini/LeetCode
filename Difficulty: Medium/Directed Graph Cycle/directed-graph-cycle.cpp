class Solution {
  public:
  bool dfs(int node,int parent,vector<vector<int>>&adj,vector<int>vis,vector<int>&pathvis){
      vis[node]=1;
      pathvis[node]=1;
      for(auto it:adj[node]){
          if(it!=parent&&vis[it]==0){
              if(dfs(it,node,adj,vis,pathvis)==true)return true;
          }
          else if(pathvis[it])return  true;
      }
      pathvis[node]=0;
      return false;
  }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<int> vis(V,0);
        vector<int> pathvis(V,0);
        // code here
        vector<vector<int>>adj(V);
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
        }
        for(int i=0;i<V;i++){
            if(vis[i]==0)
            if(dfs(i,-1,adj,vis,pathvis
            )==true)return true;
        }
        return false;
    }
};