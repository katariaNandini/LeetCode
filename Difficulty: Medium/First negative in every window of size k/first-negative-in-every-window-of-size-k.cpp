class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        list<int> negi;
        int n=arr.size();
        int i=0;
        int j=0;
        vector<int> ans;
        while(j<n){
            if(arr[j]<0)negi.push_back(arr[j]);
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                if(negi.size()!=0)ans.push_back(negi.front());
                else ans.push_back(0);
                if(arr[i]<0) negi.pop_front();
                i++;
                j++;
            }
        }
        return ans;
    }
};