class Solution {
public:
    int fib(int n) {
        // Base Condition.
   if(n <= 1)
   {
       return n;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fib(n-1);
   int slast = fib(n-2);
   
   return last + slast;
    }
};