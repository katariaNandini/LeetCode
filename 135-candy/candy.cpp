class Solution {
public:
    int candy(vector<int>& rat) {
        int n=rat.size();
        vector<int> left(n,1),right(n,1);
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<n;i++){
            if(rat[i]>rat[i-1])left[i]=left[i-1]+1;
            // else left[i]=max(1,left[i-1]-1);
                }
        for(int i=n-2;i>=0;i--){
                        if (rat[i] > rat[i + 1]) {
                right[i] = right[i + 1] + 1;

        }}                
        int count=0;
        for(int i=0;i<n;i++){
            count+=max(left[i],right[i]);
        }
return count;
    }
};