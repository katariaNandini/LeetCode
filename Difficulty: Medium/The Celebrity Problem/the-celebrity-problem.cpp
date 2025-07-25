class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        int top=0;
        int down=n-1;
        while(top<down){
            if(mat[top][down]==1) top++;
            else if(mat[down][top]==1)down--;
            else {
                top++;
                down--;
            }
        }
        if(top>down) return -1;
        for(int i=0;i<n;i++){
            if(i==top) continue;
            if(mat[i][top]==1&&mat[top][i]==0)continue;
            
            else return -1;
        }
        return top;
    }
};