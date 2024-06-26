class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> ans;
        if(x<0)
        return false;
        while(x>=1){
            int y=x%10;
            ans.push_back(y);
            x=x/10;
        }
        int n=ans.size();
        int y=n-1;
        for(int i=0;i<n/2;i++){
            if(ans[i]!=ans[y])
                return false;
                y--;
        }
        return true;
    }
};