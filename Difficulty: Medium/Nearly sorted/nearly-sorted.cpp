class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                arr[i-k]=pq.top();
                pq.pop();
            }
            
        }
        while(!pq.empty()){
            arr[n-pq.size()]=pq.top();
            pq.pop();
        }
    return ;
    }
};