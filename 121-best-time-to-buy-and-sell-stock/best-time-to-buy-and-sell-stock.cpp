class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if you are selling on ith day you can 
        // buy on the minimun price from 11st day to (i-1) day
        int minPricePrev=prices[0];
        int maxProfit=0;
        int n=prices.size();

        for(int i=1;i<n;i++){
            maxProfit=max(maxProfit,prices[i]-minPricePrev);
            minPricePrev=min(minPricePrev,prices[i]);
        }
        return maxProfit;
    }
};