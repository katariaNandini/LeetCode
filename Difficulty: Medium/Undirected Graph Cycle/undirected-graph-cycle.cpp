//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detect(vector<vector<int>>&adj,vector<int>& visit,int src){
        visit[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(visit[it]==0){
                    visit[it]=1;
                    q.push({it,node});
                }
                else if(it!=parent)return true;
            }
        }
        return false;
        
    }
    bool isCycle(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> visit(n,0);
        for(int i=0;i<n;i++){
            if(visit[i]==0){
                if(detect(adj,visit,i)) return true;
            }
        }
        return false;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends