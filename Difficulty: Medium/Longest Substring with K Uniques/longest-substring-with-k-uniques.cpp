// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        unordered_map<char, int> mp;
        int i=0;
        int j=0;
         int n=s.size();
         int count=-1;
         int maxi=-1;
         while(j<n){
            mp[s[j]]=j;
            if(mp.size()>k){
                            int minIndex = INT_MAX;
char fruitToRemove = '\0';
                for (auto it = mp.begin(); it != mp.end(); ++it) {
    char fruit = it->first;
    int index = it->second;
                    if (index < minIndex) {
                        minIndex = index;
                        fruitToRemove = fruit;
                    }
                }

                mp.erase(fruitToRemove);
                i = minIndex + 1;

                  } 
              

            
          if (mp.size() == k) {
                maxi = max(maxi, j - i + 1);
            }
          j++;
         }
return maxi;
    }
};