class Solution {
  public:
  bool dfs(int node ,int parent,vector<vector<int>>&adj,vector<int>&vis){
     vis[node]=1;
     for(auto it:adj[node]){
         if(vis[it]!=-1&&it!=parent)return true;
         if(vis[it]==-1){if(dfs(it,node,adj,vis))return true;}
     }
     return false;
  }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        if(m!=n-1)return 0;
        vector<vector<int>> adj_list(n);
        for(auto it:adj){
            adj_list[it[0]].push_back(it[1]);
            adj_list[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,-1);
        if(dfs(0,-1,adj_list,vis))return 0;//cycle found;
        for(int i=0;i<n;i++){
            if(vis[i]==-1)return 0;
        }
        return 1;
    }
};
