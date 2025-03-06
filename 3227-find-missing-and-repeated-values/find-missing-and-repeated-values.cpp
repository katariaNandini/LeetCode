class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int k=(n)*(n);
vector<int> arr(k+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[grid[i][j]]++;
                if(arr[grid[i][j]]==2) ans.push_back(grid[i][j]);
            }
        }
        for(int i=1;i<k+1;i++){
            if(arr[i]==0) ans.push_back(i);
        }
        return ans;
    }
};