class Solution {
  public:
  bool dfs(int src,int parent,vector<vector<int>>& adjlist,vector<int>&vis){
  
       vis[src]=1;
       for(auto it:adjlist[src]){
           if(vis[it]==0){
               if(dfs(it,src,adjlist,vis))return true;
           }
           else if(it!=parent)return true;
       }
       
        
      
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
       vector<vector<int>>adjlist(V);
       for(auto& it :edges){
           int u=it[0];
           int v=it[1];
           adjlist[u].push_back(v);
           adjlist[v].push_back(u);
       }
        vector<int> vis(V, 0);
        for(int i=0;i<V;i++){
            if(vis[i]==0)
            if(dfs(i,-1,adjlist,vis)==true)return true;
        }
        return false;
    }
};