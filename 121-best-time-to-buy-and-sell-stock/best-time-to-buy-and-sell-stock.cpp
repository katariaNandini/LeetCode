class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  min=prices[0];
        int maxi=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
             if(min>prices[i])min=prices[i];
             else{
                int prof=prices[i]-min;
                maxi=max(maxi,prof);
             }
        }
        return maxi;
    }
};