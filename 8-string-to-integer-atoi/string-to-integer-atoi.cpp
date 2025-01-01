class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long result = 0;
        int sign = 1;

        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Handle sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Process digits and handle overflow
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            // Handle overflow cases
            if (result > INT_MAX) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            i++;
        }
        
        return sign * result;
    }
};
