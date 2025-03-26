class Solution {
    int timer=1;
public:
//         dfs(0,-1,vis,time,low,bri);

void dfs(int node,int parent,vector<int> &vis,int time[],int low[],vector<vector<int>>&bri,vector<int> adj[]){
    time[node]=low[node]=timer;
    vis[node]=1;
    timer++;
    for(auto it:adj[node]){
        if(it==parent) continue;
        if(vis[it]==0){
            dfs(it,node,vis,time,low,bri,adj);
            // if(low[])
            low[node]=min(low[node],low[it]);
                    if(low[it]>time[node])bri.push_back({node,it});

        }
      else    low[node]=min(low[node],low[it]);


    }

}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        for(auto it :connections){
            adj[it[1]].push_back(it[0]);
            adj[it[0]].push_back(it[1]);
        }
        vector<int> vis(n,0);
        int time[n];
        int low[n];
        vector<vector<int>> bri;
        dfs(0,-1,vis,time,low,bri,adj);
        return bri;
        
    }
};