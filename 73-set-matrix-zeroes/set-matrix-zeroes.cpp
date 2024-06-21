class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int, int>> index;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0)
                    index.push_back({i,j});
            }
        }
        while(!index.empty()){
                    pair<int,int> in;
                    in=index.back();
                    for(int i=0;i<m;i++){
                            matrix[in.first][i]=0;
                    }
                    for(int j=0;j<n;j++){
                            matrix[j][in.second]=0;
                    }
                    index.pop_back();

        }
    }
};