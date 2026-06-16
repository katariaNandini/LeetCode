class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int max_area=0;
        while(i<j){
            
           int area=((j-i)*min(height[i],height[j]));
            max_area=max(area,max_area);
           
            // while(i<n&&height[i]<=height[i+1]) i++;
            // while(j>0&&height[j]<=height[j-1]) j--;
            if(height[i]<=height[j])i++;
           else j--;
        
        }
        return max_area;
    }
};