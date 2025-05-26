class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
int total=0;
        for(int i=0;i<n;i++){
            map<char,int>freq;
            for(int j=i;j<n;j++){
                freq[s[j]]++;

            
            int maxi=INT_MIN;
            int mini=INT_MAX;
        for(auto&p:freq){
            maxi=max(maxi,p.second);
            mini=min(mini,p.second);
        }
        
        total+=(maxi-mini);}
        }
        return total;
    }
};