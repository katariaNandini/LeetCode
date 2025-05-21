class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rs=0,ls=0,ms=0;
        for(int i=0;i<k;i++)ls+=cardPoints[i];
        
        int n=cardPoints.size();
        int ri=n-1;
        int ans=ls;

        for(int i=k-1;i>=0;i--){
            ls=ls-cardPoints[i];
            rs=rs+cardPoints[ri];
            ri--;
            ans=max(ans,ls+rs);
        }
        return ans;

        }
    
};