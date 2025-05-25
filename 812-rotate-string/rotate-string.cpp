class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s==goal) {
                return true;
                break;
            }
            char ch=s[0];
            s.erase(0,1);
            s.push_back(ch);
        }
        return false;
    }
};