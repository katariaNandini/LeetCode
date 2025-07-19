class Solution {
  public:
  bool detect(int src,vector<vector<int>>& adjlist,vector<int>&vis){
       queue<pair<int,int>> q;
       q.push({src,-1});
       vis[src]=1;
       while(!q.empty()){
           int node=q.front().first;
           int parent=q.front().second;
           q.pop();
           for(auto it:adjlist[node]){
               if(vis[it]!=1){q.push({it,node});
                   vis[it] = 1; 
               }
               else if(it!=parent)return true;
        
           }
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
            if(detect(i,adjlist,vis)==true)return true;
        }
        return false;
    }
};