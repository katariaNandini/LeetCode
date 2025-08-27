class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        vector<int> temp(26,0);
        int maxi=0;
        int n=s.size();
        int i=0;
        int j=0;
        while(j<n&&i<n){
            if(temp[s[j]-'a']==0){
               temp[s[j]-'a']++;
                j++;
                             maxi=max(j-i,maxi);

            }
           
            else {
                    temp[s[i]-'a']--;
                    i++;}

       
        }
        return maxi;
    }
};
