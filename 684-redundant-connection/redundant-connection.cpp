class DSU{
    public:
    vector<int>parent;
    vector<int> rank;
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
            rank[i]=0;
        }
    }
    int find(int x){
        if(x==parent[x]) return x;
        return parent[x]=find(parent[x]);
    }
    void Union(int x,int y){
        int x_parent=find(x);
        int y_parent=find(y);
        if(x_parent==y_parent)return ;
         if(rank[x_parent]>rank[y_parent]) parent[y_parent]=x_parent;
         else if(rank[x_parent]<rank[y_parent]) parent[x_parent]=y_parent;
         else {
parent[y_parent]=x_parent;
rank[x_parent]++;
         }
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        DSU dsu(n);
        for(auto&edges:edges){
            int u=edges[0];
            int v=edges[1];
            if(dsu.find(u)==dsu.find(v)) return edges;
dsu.Union(u,v);
        }
        return {};
    }
};