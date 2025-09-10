class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        // Precompute powers of 2
        vector<int> pow2(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        }

        int count = 0;
        int i = 0, j = n - 1;

        while (i <= j) {
            if (nums[i] + nums[j] <= target) {
                count = (count + pow2[j - i]) % MOD;
                i++;
            } else {
                j--;
            }
        }

        return count;
    }
};
