class Solution {
public:
    bool distri(int mid,vector<int> & candies,long long k){
        int n=candies.size();
        for(int i=0;i<n;i++){
            k-=candies[i]/mid;
            if(k<=0) return true;
        }
        return k<=0;
    }
    int maximumCandies(vector<int>& candies, long long k) {
    int n=candies.size();
    int maxc=0;
    long long total=0;
    for(int i=0;i<n;i++){
        maxc=max(maxc,candies[i]);
        total+=candies[i];
    }        
    if(total<k) return 0;

    int low=1;
    int high=maxc;
    int res=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(distri(mid,candies,k)){
            res=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return res;

    }

};