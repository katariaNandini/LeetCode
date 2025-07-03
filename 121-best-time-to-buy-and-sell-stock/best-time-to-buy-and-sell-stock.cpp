class Solution {
public:
    int maxProfit(vector<int>& prices) {
         // if you are selling on ith day you can 
        // buy on the minimun price from 11st day to (i-1) day
        int minprice=prices[0];
        int profit=0;
        int maxprofit=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            minprice=min(minprice,prices[i]);
            profit=prices[i]-minprice;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};