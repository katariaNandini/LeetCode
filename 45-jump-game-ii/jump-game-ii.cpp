class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),l=0,r=0,maxjump=0,count=0;
        // int r=0;
        // int l=0;
        // int maxjump=0;
        while(r<n-1){
            maxjump=0;
            for(int i=l;i<=r;i++){
                maxjump=max(maxjump,nums[i]+i);
            
            }
            l=r+1;
            r=maxjump;
            count++;
        }
        return count;
    }
};