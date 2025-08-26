typedef long long ll;
class Solution {
  public:
    long long sumBetweenTwoKth(long long a[], long long n, long long k1, long long k2) {
        // Your code goes here
        ll maxi=max(k1,k2);
        priority_queue<ll>pq;
        for(ll i=0;i<n;i++){
            pq.push(a[i]);
            if(pq.size()>maxi)pq.pop();
        }
        // ll first=pq.top();
        pq.pop();
        int sum=0;
        ll sub=maxi-min(k1,k2);
        for(ll i=0;i<sub-1;i++){
            sum+=pq.top();
            pq.pop();
        }
        // ll sec=pq.top();
        return sum;
    }
};