class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(V);
        for(auto it:prerequisites){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
        }
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        stack<int>st;
        for(int i=0;i<V;i++){
            if(indegree[i]==0)st.push(i);
            
        }
        // vector<int> ans;
        int cnt=0;
        while(!st.empty()){
            int node=st.top();
            st.pop();
            // ans.push_back(node);
            cnt++;
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0)st.push(it);
            }
        }
        
        if(cnt==V)return true;
        else return false;
  
        
    }
};