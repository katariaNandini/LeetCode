class Solution {
public:
    int maxi = INT_MIN, start = -1;
    void oddEven(int i, int j, string &s) {
        while(i>=0 && j<s.size() && s[i]==s[j]) {
            if(maxi<j-i+1) {
                maxi = j-i+1;
                start = i;
            }
            i--;
            j++;
        }
    }

    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++) {
            oddEven(i,i,s);
            oddEven(i,i+1,s);
        }

        return s.substr(start,maxi);
    }
};