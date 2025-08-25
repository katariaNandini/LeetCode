class Solution {
  public:
    int minCost(vector<int>& arr) {
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int sum=0;
        while(pq.size()!=1){
            int first=pq.top();
            pq.pop();
            int sec=pq.top();
            pq.pop();
            int add=first+sec;
            sum+=add;
            pq.push(add);
            
        }
        return sum;
        
        // code here
        
    }
};