class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {

        int n=recipes.size();
        unordered_set<string>st(begin(supplies),end(supplies));
        unordered_map<string,vector<int>>adj;
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(string& ing:ingredients[i]){
                if(!st.count(ing)){
                    adj[ing].push_back(i);
                    indegree[i]++;
                }
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<string> res;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            string recipe=recipes[node];
            res.push_back(recipe);
            for(auto it:adj[recipe]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);

            }
        }
return res;
    }
};