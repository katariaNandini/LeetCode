class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int maxarea=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!s.empty()&&heights[s.top()]>heights[i]){
                int element=s.top();
                s.pop();
                int nse=i;
                int pse=s.empty()?-1:s.top();
                maxarea=max(heights[element]*(nse-pse-1),maxarea);
            }
            s.push(i);
        }

        while(!s.empty()){
            int nse=n;
            int element=s.top();
            s.pop();
            int pse=s.empty()?-1:s.top();
            maxarea=max(heights[element]*(nse-pse-1),maxarea);

        }
        return maxarea;
    }
};