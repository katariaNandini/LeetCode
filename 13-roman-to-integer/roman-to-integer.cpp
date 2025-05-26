class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();      // length of the input string
        int count = 0;         // final result

        // Traverse the string from right to left
        for (int i = n - 1; i >= 0; i--) {

            // Check if there's a previous character (i > 0)
            if (i != 0) {
                // Handle special subtractive cases (e.g., IV = 4, IX = 9)

                if (s[i] == 'V' && s[i - 1] == 'I') {
                    count += 4;  // IV
                    i--;         // skip previous character
                    continue;
                }

                if (s[i] == 'X' && s[i - 1] == 'I') {
                    count += 9;  // IX
                    i--;
                    continue;
                }

                if (s[i] == 'L' && s[i - 1] == 'X') {
                    count += 40; // XL
                    i--;
                    continue;
                }

                if (s[i] == 'C' && s[i - 1] == 'X') {
                    count += 90; // XC
                    i--;
                    continue;
                }

                if (s[i] == 'D' && s[i - 1] == 'C') {
                    count += 400; // CD
                    i--;
                    continue;
                }

                if (s[i] == 'M' && s[i - 1] == 'C') {
                    count += 900; // CM
                    i--;
                    continue;
                }
            }

            // Handle normal cases
            if (s[i] == 'I') count += 1;
            if (s[i] == 'V') count += 5;
            if (s[i] == 'X') count += 10;
            if (s[i] == 'L') count += 50;
            if (s[i] == 'C') count += 100;
            if (s[i] == 'D') count += 500;
            if (s[i] == 'M') count += 1000;
        }

        return count;  // return final result
    }
};
