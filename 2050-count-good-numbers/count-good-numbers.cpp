class Solution {
public:
const  long long mod=1e9+7;
 long long myPow(long long x, long long n) {
        long long nn=n;
        long long ans=1;
        if(nn<0)nn=nn*-1;
        while(nn>0){
            if(nn%2){ans=(ans*x)%mod;
            nn--;
            }
            else {
                x=(x*x)%mod;
                nn=nn/2;
            }

        }
        if(n<0)ans=1/ans;
        ans=ans%mod;
return ans;
    }
    int countGoodNumbers(long long n) {
        long long nn=n;
        if(n%2)nn=nn-1;
        nn=nn/2;
        long long ans=1;
        ans=(ans*myPow(5,nn))%mod;
        ans=(ans*myPow(4,nn))%mod;
        if(n%2)ans=(ans*5)%mod;
    
        return(int) ans;
    }
};