class Solution {
public:
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
    vector<int> closestPrimes(int left, int right) {
        int leftprime=-1;
        int rightprime=-1;
        vector<int> arr_prime;
        for(int i=left;i<=right;i++){
            if(isPrime(i))
                arr_prime.push_back(i);

            //     if(leftprime==-1)leftprime=i;
            // }
            // // if(isPrime(right-i+left)){
            // //     if(rightprime==-1||(rightprime>right-i+left)rightprime=right-i+left;
            // // }
            // if(rightprime==-1&&isPrime(i)&&i!=leftprime){
            //     rightprime=i;
            // }
            
        }
        if (arr_prime.size() <= 1) return {-1, -1};  // Fixed indexing issue

        vector<int> ans={-1,-1};
        int maxdiff=INT_MAX;
        // if(arr_prime.size()==1)return {arr_prime[0],-1};
        
        for(int i=0;i<arr_prime.size()-1;i++){
            if((arr_prime[i+1]-arr_prime[i])<maxdiff){
                ans={arr_prime[i],arr_prime[i+1]};
                maxdiff=arr_prime[i+1]-arr_prime[i];
                }
            }
        
        // ans.push_back(leftprime);
        // ans.push_back(rightprime);
        // if(leftprime>rightprime){
        //     return {-1,-1};
        // }
        return ans;
    }
};