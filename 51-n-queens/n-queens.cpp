class Solution {
public:
bool issafe(int row,int col,vector<string> &board,int n){
    int i=row,j=col;
    while(i>=0&&j>=0){
        if(board[i][j]=='Q') return false;
        i--;
        j--;
    }
    i=row,j=col;
        while(i<n&&j>=0){
        if(board[i][j]=='Q') return false;
        i++;
        j--;
    }
    i=row,j=col;
        while(j>=0){
        if(board[i][j]=='Q') return false;
        // i--;
        j--;
    }
    return true;
}
void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n){
    if(col==n) {ans.push_back(board);
    return ;}
    for(int i=0;i<n;i++){
        if(issafe(i,col,board,n)){
            board[i][col]='Q';
            solve(col+1,board,ans,n);
            board[i][col]='.';
            
        }

    }


}
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string> ds(n);
        for(int i=0;i<n;i++){
            ds[i]=s;
        }
        // ds.push_back(s);
        vector<vector<string>> ans;
        solve(0,ds,ans,n);
        // ans.push_back(ds);
        return ans;
    }
};