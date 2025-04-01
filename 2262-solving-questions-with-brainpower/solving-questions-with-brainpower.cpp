class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, 0);  // DP array initialized to 0

        for (int i = n - 1; i >= 0; --i) {
            int nextIndex = i + 1 + questions[i][1]; // Jump index
            long long take = questions[i][0] + (nextIndex < n ? dp[nextIndex] : 0);
            long long skip = dp[i + 1];  // Skip the current question

            dp[i] = max(take, skip);
        }

        return dp[0];
    }
};
