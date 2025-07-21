class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int n=adj.size();
        queue<int>q;
        vector<int>dist(n,1e9);
        q.push(src);
        dist[src]=0;
        while(!q.empty()){
           int node=q.front();
           q.pop();
           for(auto it:adj[node]){
               if(dist[it]>1+dist[node]){
                   dist[it]=1+dist[node];
                   q.push(it);
               }
           }
            
        }
        for(int i=0;i<n;i++){
            if(dist[i]==1e9)dist[i]=-1;
        }
        return dist;
    }
};