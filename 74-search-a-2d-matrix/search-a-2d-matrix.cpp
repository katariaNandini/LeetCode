class Solution {
public:
int findrow(vector<vector<int>>& matrix, int target){
    int low=0;
            int m=matrix[0].size();

        int high=matrix.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
          if (matrix[mid][0] <= target &&
            matrix[mid][m - 1] >= target) {
            return mid;
        }
            else if (matrix[mid][0]<target) {
                low=mid+1;
            }
            else high=mid-1;
        }
        return -1;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=findrow(matrix,target);
        if(row == -1) return false;
        int low=0;
        int high=m-1;
        cout<<row<<"seahignin this row"<<endl;
        while(low<=high){
                        int mid=low+(high-low)/2;
            if(matrix[row][mid]==target) return true;
            else if(matrix[row][mid]<target) low=mid+1;
            else high =mid-1;
            
        }
        return false;
    }
};