class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0;
        int ten=0;
        // int tw=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5)five++;
           else  if(bills[i]==10) {
            if(five<=0) return false;
            else {
                five--;
                ten++;
            }}
            else {
              if(ten>=1&&five>=1){
                five--;
                ten--;
              }
             else if(five>=3) five=five-3;
              else return false;

            
            }
            

        }
        return true;
    }
};