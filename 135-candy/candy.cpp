class Solution {
public:
    int candy(vector<int>& rat) {
        int n=rat.size();
        int sum=1;
        int i=1;
        while(i<n){
            if(rat[i]==rat[i-1]){
                sum++;
                i++;
                continue;
            }
            int uplen=0;
            int peak=1;
            while(i<n&&rat[i]>rat[i-1]){
                peak++;
                uplen++;
                sum+=peak;
                i++;
            }
            int downlen=0;
            int down =1;
            
            while(i<n&&rat[i]<rat[i-1]){
               
                downlen++;
                sum+=down;
                 down++;
                i++;
            }
            if(downlen>=peak)sum+=(downlen-peak+1);
        }
        return sum;
    }
};