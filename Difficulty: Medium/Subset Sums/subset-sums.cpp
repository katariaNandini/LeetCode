class Solution {
  public:
  void f(vector<int>& arr,vector<int>&sum,int ind,int s){
      if(ind==arr.size()){sum.push_back(s);
      return ;}
    //   take
    f(arr,sum,ind+1,s+arr[ind]);
     f(arr,sum,ind+1,s);
    
      
      
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> sum;
        f(arr,sum,0,0);
        // vector<int> ans(sum.begin(),sum.end());
        return sum;
    }
};