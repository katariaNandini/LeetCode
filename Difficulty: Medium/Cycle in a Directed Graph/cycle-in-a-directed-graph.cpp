//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool dfs(vector<vector<int>> &adj,vector<int>&visit,vector<int>&path,int v,int i)
      {  visit[i]=1;
        path[i]=1;
        for( auto it:adj[i]){
            if(!visit[it]){
                    if(dfs(adj,visit,path,v, it)==true) return true;
                    
            }
            else if(path[it]) return true;
            
        }
        path[i]=0;
        return false;

  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(vector<vector<int>> &adj) {
        int v=adj.size();
        vector<int> visit(v,0);
        vector<int> path(v,0);
    
        for(int i=0;i<v;i++){
         if(!visit[i]){
         if(dfs(adj,visit,path,v, i)==true) return true;
            }
        }
        return false;
        // code here
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends