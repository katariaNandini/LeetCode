class Solution {
public:
    int square(int n){
            int multi=0;
            while(n>0){
                int digit =n%10;
                multi+=digit*digit;
                // num.push_back(n%10);
                n=n/10;
            }
    return multi;
    }
    bool isHappy(int n) {
        int fast=n;
        int slow=n;

        do{
            slow=square(slow);
            fast=square(square(fast));
            if(slow==1) return true;

        }while(fast!=slow);
        return false;
   
    }
};