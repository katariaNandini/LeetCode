class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int ans=0;
bool oop=true;

        while(oop==true){
            bool op=true;
        for(int i=1;i<colors.size();i++){
           if( colors[i]==colors[i-1]){
            op=false;
            ans+=min(neededTime[i],neededTime[i-1]);

            if(neededTime[i]<neededTime[i-1]){
            neededTime.erase(neededTime.begin() + i);
            colors.erase(i,1);
            }
            else{
                neededTime.erase(neededTime.begin() + i-1);
            colors.erase(i-1,1);}
            }
            
            }
            if(op==false)oop=true;
            else oop=false;
            }
        
        
        return ans;
    }


};