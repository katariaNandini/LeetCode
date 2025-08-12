class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        long long low=1;
        long long high=x;
        int ans=1;
        while(low<=high){
            long long mid=(low+high)/2;
            if((long long)mid*mid<=x){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};