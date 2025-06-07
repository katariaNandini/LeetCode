class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxi=INT_MIN;
        while(l<r){
            int minindex=min(height[l],height[r]);
            int area=(r-l)*minindex;
            maxi=max(maxi,area);
            if(height[l]<height[r])l++;
            else if(height[l]>height[r])r--;
            else {r--;
            l++;}

        }
        return maxi;
    }

};