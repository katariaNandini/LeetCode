typedef pair<int,int> pi;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi>pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            pq.push({abs(arr[i]-x),i});
            if(pq.size()>k)pq.pop();
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};