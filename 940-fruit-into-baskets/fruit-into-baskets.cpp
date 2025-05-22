class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int i=0;
        int j=0;
         int n=fruits.size();
         int count=0;
         int maxi=0;
         while(j<n){
            mp[fruits[j]]=j;
            if(mp.size()>2){
                            int minIndex = INT_MAX;
                int fruitToRemove = -1;
                for (auto& [fruit, index] : mp) {
                    if (index < minIndex) {
                        minIndex = index;
                        fruitToRemove = fruit;
                    }
                }

                mp.erase(fruitToRemove);
                i = minIndex + 1;

                  } 
              

            
          count=j-i+1;
          maxi=max(count,maxi);
          j++;
         }
return maxi;
    }
};

