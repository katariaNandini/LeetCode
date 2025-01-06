class Solution {
public:
    vector<int> minOperations(string boxes) {
        int cumval=0;
        int cumsum=0;
        int n=boxes.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=cumsum;
            cumval+=boxes[i]=='0'?0:1;
            cumsum+=cumval;
        }
        cumsum=0;
        cumval=0;
        for(int i=n-1;i>=0;i--){
ans[i]+=cumsum;
            cumval+=boxes[i]=='0'?0:1;
            cumsum+=cumval;
        }
        return ans;
    }
};