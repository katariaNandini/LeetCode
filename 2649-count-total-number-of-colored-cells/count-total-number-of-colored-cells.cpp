class Solution {
public:
    long long coloredCells(int n) {
     int k=2*(n-1)+1;
     long long sum=k;
     k=k-2;
    while(k>=1){
        sum+=k;
        sum+=k;
        k=k-2;
    }

     return sum;

     
    }
};