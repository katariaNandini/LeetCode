// User function Template for C++
 class disjoint{
    vector<int>rank,size,parent;
    public:
    disjoint(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findparent(int node){
        if(node==parent[node])return node;
        return  parent[node]=findparent(parent[node]);
    }
    void unionbyrank(int u,int v){
        int ulp_u=findparent(u);
        int ulp_v=findparent(v);
        if(ulp_u==ulp_v)return ;
        if(rank[ulp_u]>rank[ulp_v])parent[ulp_v]=ulp_u;
        else if(rank[ulp_u]<rank[ulp_v])parent[ulp_u]=ulp_v;
        else {
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionbysize(int u,int v){
        int ulp_u=findparent(u);
        int ulp_v=findparent(v);
        if(ulp_u==ulp_v)return ;
        if(rank[ulp_u]>rank[ulp_v])
        {parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
        else 
            {parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        
    }
    
  };
class Solution {
  public:
  
 
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        vector<pair<int,pair<int,int>>>edge;
        for(auto &it : edges){
    int u = it[0], v = it[1], wt = it[2];
    edge.push_back({wt, {u, v}});
}
        disjoint ds(V);
        sort(edge.begin(),edge.end());
        int mstwt=0;
        for(auto it:edge){
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            if(ds.findparent(u)!=ds.findparent(v)){
                mstwt+=wt;
                ds.unionbysize(u,v);
            }
        }
        return mstwt;
        // code here
        
    }
};