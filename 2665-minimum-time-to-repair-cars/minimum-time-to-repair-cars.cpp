class Solution {
public:
    bool possible(long long time,vector<int> & ranks,int cars){
        long long count=0;
        int n=ranks.size();
        for(int i=0;i<n;i++){
            count+=(long long)sqrt(time/ranks[i]);
        }
        return count>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long low=1;
        long long high = (long long) cars * cars * (*std::max_element(ranks.begin(), ranks.end()));
        long long result=-1;
        while(low<=high){
            long long mid=(low+high)/2;
            if(possible(mid,ranks,cars)){
                result=mid;
               high=mid-1; 
            } 
            else 
            low=mid+1;

        }
        return result; 
    }
};