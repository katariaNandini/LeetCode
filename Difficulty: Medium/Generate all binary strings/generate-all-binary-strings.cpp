// User function Template for C++

class Solution {
  public:
  void f(int n,string& s,vector<string>&ans){
      if(s.size()==n){
          ans.push_back(s);
          return ;
          
      }
      s+='0';
      f(n,s,ans);
      s.pop_back();
      if(s.empty()||s.back()!='1')
      {s+='1';
      f(n,s,ans);
                s.pop_back();

      }
      return ;
  }
    vector<string> generateBinaryStrings(int num) {
        int n=0;
        string s="";
        vector<string>ans;
        f(num,s,ans);
        return ans;
        // Write your code
        
    }
};