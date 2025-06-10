/*
Intuition:
Use backtracking to fill empty cells ('.') with valid digits ('1'-'9') 
such that each digit appears only once in every row, column, and 3x3 sub-box.

Algorithm:
1. Traverse each cell of the board.
2. If an empty cell is found:
   - Try placing digits '1' to '9'.
   - Use the `check()` function to validate the placement.
   - If valid, recursively solve for the next cell.
   - If recursion fails, backtrack by resetting the cell to '.'.
3. If all cells are filled correctly, return true to indicate the board is solved.
*/

class Solution {
public:
bool check(vector<vector<char>>&board,int c,int row,int col){
    for(int i=0;i<9;i++){
        if(board[i][col]==c) return false;
        if(board[row][i]==c) return false;
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)return false;

    }
    return true;
}
 bool solve(vector<vector<char>>&board){
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(int c='1';c<='9';c++){
                        if(check(board,c,i,j)){
                            board[i][j]=c;
                            if(solve(board))return true;
                            else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;

    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
   
};