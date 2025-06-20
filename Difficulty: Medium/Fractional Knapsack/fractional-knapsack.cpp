// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int cap) {
        // code here
        vector<pair<double,pair<int,int>>>ds;
        
        int n=val.size();
        for(int i=0;i<n;i++){
            int wte=wt[i];
            int vali=val[i];
              double ratio = (double)val[i] / wt[i];
            ds.push_back({ratio,{wte,vali}});
        }
        sort(ds.begin(),ds.end(), [](const pair<double, pair<int, int>>& a, const pair<double, pair<int, int>>& b) {
    return a.first > b.first; // descending order
});
        
        double total=0;
        for(auto it:ds){
            if(cap==0) break;
            if(it.second.first<=cap){
                cap-=it.second.first;
                total+=it.second.second;
            }
            else{
                total+=it.first*cap;
                break;
                
            }
        }
        return total;
    }
};
