class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int ans=0;
        
        while(l<r){
            int maxi=0;
            int he=min(height[l],height[r]);
            int wid=r-l;
            maxi=he*wid;
            ans=max(maxi,ans);
            // cout<<"l is at "<<l<<"  r is at "<<r<<"   ans is   "<< ans<<endl;
            if(height[l]<height[r]) l++;
            else r--;
            // if(height[r]<height[r-1]) r--;
            // else l++;



        }
        return ans;
    }
};