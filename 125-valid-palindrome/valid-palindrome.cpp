class Solution {
public:
    bool isPalindrome(string s) {
        for (auto& x : s) { 
        x = tolower(x); 
    }
    string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += c;
            }
        }
        int  n=filtered.size();
         for (int i = 0; i < n / 2; ++i) {
            if (filtered[i] != filtered[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};