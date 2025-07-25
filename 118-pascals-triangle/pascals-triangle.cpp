class Solution {
public:
    vector<int> rows(int row){
        long long ans=1;
        vector<int>rowans;
        rowans.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            rowans.push_back(ans);
        }
return rowans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(rows(i));
        }
        return ans;
    }
};