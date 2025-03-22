class Solution {
public:
void dfs (vector<int> adj[],vector<int> & vis,int node,int &v,int& e){
    vis[node]=1;
   v= v+1;
   e=e+adj[node].size();
    for( auto it:adj[node]){
        if(!vis[it]){
            dfs(adj,vis,it,v,e);
        }
    }

}
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];

        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,0);
        int complete=0;
        for(int  i=0;i<n;i++){
            if(!vis[i]){
                int e=0;int v=0;
                dfs(adj,vis,i,v,e);
                e=e/2;
                if(e==v*(v-1)/2){
                    complete++;
                }
            }
        }

        return complete;
    }
};