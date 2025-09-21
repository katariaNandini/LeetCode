class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int> mp;
        int i=0;
        int j=0;
        int n=f.size();
        int maxi=0;
        while(j<n){
             mp[f[j]]++;
            while(mp.size()>2){
                mp[f[i]]--;
                if(mp[f[i]]==0)mp.erase(f[i]);
                i++;
            }
            j=max(j,i);
           
            cout<<i<<j<<endl;
            maxi=max(j-i+1,maxi);
            j++;
        }
        return maxi;
    }
};