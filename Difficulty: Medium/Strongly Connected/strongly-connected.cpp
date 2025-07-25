//Position this line where user code will be pasted.
class Solution {
  public:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,stack<int>&st){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0)dfs(it,adj,vis,st);
            
        }
        st.push(node);
    }
    void dfs1(int node,vector<vector<int>>&adj,vector<int>&vis){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0)dfs1(it,adj,vis);
            
        }
        // st.push_back(node);
    }
    int kosaraju(vector<vector<int>> &adj) {
        int n=adj.size();
        // code here
        stack<int>st;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0)dfs( i,adj,vis,st);
        }
        vector<vector<int>>adjT(n);
        for(int i=0;i<n;i++){
        for(auto it:adj[i]){
            
            adjT[it].push_back(i);
        }}
        vector<int>vis1(n,0);
        int scc=0;
        while(!st.empty()){
            
        int i=st.top();
        st.pop();
        
            if(vis1[i]==0){
                scc++;
                dfs1(i,adjT,vis1);
            }
        }
        return scc;
        
    }
};