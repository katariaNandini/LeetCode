class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int s=blocks.size();
        int count=0;
        // if(k==s){
            for(int i=0;i<k;i++){
                if(blocks[i]=='W')count++;
            }
            // return count;
        // }
        int mini=count;
        for(int i=k;i<s;i++){
            if(blocks[i-k]=='W') count--;
            if(blocks[i]=='W') count++;
            mini=min(count,mini);
            
        }
        return mini;
    }
};