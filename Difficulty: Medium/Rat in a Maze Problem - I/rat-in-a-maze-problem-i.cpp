/*
Intuition:
We want to find all possible paths from the top-left cell (0,0) to the bottom-right cell (n-1,n-1) in a maze.
At each step, we can move in one of the allowed directions (usually D, L, R, U) if the next cell is within bounds, not visited, and not blocked (i.e., maze[i][j] == 1).

Algorithm:
1. Start from cell (0,0) with an empty path string `s`.
2. Use recursion and backtracking to explore all valid directions.
3. Mark the current cell as visited before recursive calls, and unmark it afterward (backtrack).
4. If you reach (n-1,n-1), add the current path string to the result.
5. Use a `vis` matrix to avoid cycles and revisit.
*/


class Solution {
  public:
  void solve(int i,int j,vector<vector<int>>&maze,
  int n,string s,vector<vector<int>>&vis,vector<string>&ans){
      if(i==n-1&&j==n-1)ans.push_back(s);
    //   down
      if(i+1<n&&vis[i+1][j]!=1&&maze[i+1][j]==1){
          vis[i][j]=1;
          solve(i+1,j,maze,n,s+'D',vis,ans);
          vis[i][j]=0;
      }
      
      
      if(j-1>=0&&vis[i][j-1]!=1&&maze[i][j-1]==1){
           vis[i][j]=1;
          solve(i,j-1,maze,n,s+'L',vis,ans);
          vis[i][j]=0; 
      }
       
       
       
       if(j+1<n&&vis[i][j+1]!=1&&maze[i][j+1]==1){
          vis[i][j]=1;
          solve(i,j+1,maze,n,s+'R',vis,ans);
          vis[i][j]=0;
      } 
      
      
      if(i-1>=0&&vis[i-1][j]!=1&&maze[i-1][j]==1){
          vis[i][j]=1;
          solve(i-1,j,maze,n,s+'U',vis,ans);
          vis[i][j]=0;
      }
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        vector<string> ans;
        if(maze[0][0]==1)solve(0,0,maze,n,"",vis,ans);
        return ans;
        // code here
    }
};