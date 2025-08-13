class Solution {
public:
    long long f(vector<int>&piles,int hour){
        int n=piles.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            double temp=1.0 * piles[i]/hour;
            ans+=ceil(temp);
        }
        return ans;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        int high=maxi;
        int ans=1;
        while(low<=high){
            int mid=(low+high)/2;
            // if(f(piles,mid)==h)return mid;
             if(f(piles,mid)>h)low=mid+1;
            else {
                ans=mid;
                high=mid-1;
            }        
            }
            return ans;
    }
};