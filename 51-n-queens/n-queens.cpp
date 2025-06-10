class Solution {
public:
// in this approch we are using hasing to avoid o(n)+o(n)+o(n) complexity of issfe function 
// if you want to see that solution it is ubmitted previsly 
/*
Explanation of Hashing in N-Queens (Optimized Backtracking):

To solve the N-Queens problem efficiently, we need to ensure that no two queens
are placed in the same row, column, or diagonal.

✅ To do this in O(1) time per move, we use 3 hash arrays to track queen attacks:

1. leftRow[n]:
   - Keeps track of whether a queen is already placed in a given row.
   - If leftRow[row] == 1, we skip that row.

2. lowerDiagonal[2n - 1]:
   - Tracks the '\' (left-to-right) diagonals.
   - All cells on the same '\' diagonal have the same (row + col) value.
   - Example:
     (0,0), (1,1), (2,2), (3,3) → all have row+col = 0, 2, 4, 6 respectively.

3. upperDiagonal[2n - 1]:
   - Tracks the '/' (right-to-left) diagonals.
   - All cells on the same '/' diagonal have the same (col - row) value.
   - Since (col - row) can be negative, we shift the index by adding (n - 1).
   - So the actual index becomes: (n - 1 + col - row).
   - Example:
     (0,3) → col-row = 3 → index = 3 + 3 = 6
     (1,2) → col-row = 1 → index = 1 + 3 = 4
     (2,1) → col-row = -1 → index = -1 + 3 = 2
     (3,0) → col-row = -3 → index = -3 + 3 = 0

\U0001f9e0 With these arrays, you can check if placing a queen at (row, col) is safe
in constant time by verifying:
   - leftRow[row] == 0
   - lowerDiagonal[row + col] == 0
   - upperDiagonal[n - 1 + col - row] == 0

\U0001f4cc Why it's useful:
- Without hashing, checking diagonals would take O(n) time.
- With hashing, we reduce it to O(1), making the backtracking solution faster.

This optimization allows us to efficiently generate all valid N-Queens board configurations.
*/

// bool issafe(int row,int col,vector<string> &board,int n){
//     int i=row,j=col;
//     while(i>=0&&j>=0){
//         if(board[i][j]=='Q') return false;
//         i--;
//         j--;
//     }
//     i=row,j=col;
//         while(i<n&&j>=0){
//         if(board[i][j]=='Q') return false;
//         i++;
//         j--;
//     }
//     i=row,j=col;
//         while(j>=0){
//         if(board[i][j]=='Q') return false;
//         // i--;
//         j--;
//     }
//     return true;
// }
void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n ,vector<int > &row,vector<int>&upperD,vector<int>&lowerD){
    if(col==n) {ans.push_back(board);
    return ;}
    for(int i=0;i<n;i++){
        if(!row[i]&&!upperD[i+col]&&!lowerD[n-1+col-i]){
            board[i][col]='Q';
            row[i]=1;
            upperD[i+col]=1;
            lowerD[n-1+col-i]=1;
            solve(col+1,board,ans,n,row,upperD,lowerD);
            board[i][col]='.';
             row[i]=0;
            upperD[i+col]=0;
            lowerD[n-1+col-i]=0;
            
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
        vector<int > row(n,0);
        vector<int>upperD(2*n-1,0);
        vector<int>lowerD(2*n-1,0);
        vector<vector<string>> ans;
        solve(0,ds,ans,n,row,upperD,lowerD);
        // ans.push_back(ds);
        return ans;
    }
};