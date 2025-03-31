class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<int> pairsum;
        int n=weights.size();
        for(int i=0;i<n-1;i++){
            pairsum.push_back(weights[i]+weights[i+1]);
        }
        sort(pairsum.begin(),pairsum.end());
        int m=pairsum.size();
        long long maxi=0;
        long long mini=0;
        for(int i=0;i<k-1;i++){
            mini+=pairsum[i];
            maxi+=pairsum[m-i-1];
        }
        return maxi-mini;
        
    }
};