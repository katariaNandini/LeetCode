class Solution {
public:
bool static comp(int n,int m){
    return n>m;
}
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int i=0;
        for(int j=0;j<m;j++){
           // if(g[i]>s[i])continue;
            if(i<n&&g[i]<=s[j]) {ans++;
            i++;}
        }
        return ans;
    }
};