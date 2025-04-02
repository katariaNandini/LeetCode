class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        int n=q.size();
        if(n==1)return q[0][0];
        vector<long long> ans(200001,0);
        for(int i=n-1;i>=0;i--){
            ans[i]=max(q[i][0]+ans[i+q[i][1]+1],ans[i+1]);
        }
        return ans[0];
    }
};