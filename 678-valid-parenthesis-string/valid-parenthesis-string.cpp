/*
-----------------------------
Intuition:
We use a greedy approach to track the possible range of open brackets using two counters:
- `mini`: Minimum number of open brackets possible (treat '*' as ')')
- `maxi`: Maximum number of open brackets possible (treat '*' as '(')

At each character:
- If it's '(': increment both mini and maxi
- If it's ')': decrement both mini and maxi
- If it's '*': mini-- (treat as ')'), maxi++ (treat as '(')

To stay valid:
- mini should never be negative → reset mini to 0 if it is
- If maxi < 0 at any point → more ')' than '(', invalid

At the end:
- If mini == 0, there is a valid way to interpret the string.

Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------
*/


class Solution {
public:
    bool checkValidString(string s) {
        int mini=0;
        int maxi=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                mini++;
                maxi++;
            }
            else if(s[i]==')'){
                mini--;
                maxi--;
                // if(mini<0) return false;
            }
            else {
               
                    mini--;
                    maxi++;
                }
                if(mini<0) mini=0;
                if(maxi<0) return false;
            }
        
        // if(mini>0) return false;
         return (mini==0);
        
    }
};