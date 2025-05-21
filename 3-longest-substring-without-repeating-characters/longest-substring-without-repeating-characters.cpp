class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int maxi=0;
        // int j=0;
        
        vector<int> mpp(256,-1);
       for(int j=0;j<n;j++){
        int index=0;
        if(mpp[s[j]]==-1) {
            mpp[s[j]]=j;
            index=j-i+1;
        }
        else{
            
              i = max(i, mpp[s[j]] + 1); 
            mpp[s[j]] = j; 
            index=j-i+1;
        }
        maxi=max(maxi,index);
       }
       return maxi;
    }
   
};