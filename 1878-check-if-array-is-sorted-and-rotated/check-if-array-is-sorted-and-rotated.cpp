class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 1; i < n; i++) {
            if (nums[i-1] > nums[i]) {
                count++;
            }
        }
        
        // Check the last element with the first element
        if (nums[n-1] > nums[0]) {
            count++;
        }
        
        return count <= 1;
    }
};