class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        
        int count = 1; // Initialize count to 1 as the first element is always unique
        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[count] = nums[i]; // Move unique element to the next position
                count++; // Increment count for unique elements
            }
        }
        
        nums.resize(count); // Resize the vector to remove duplicates
        return count;
    }
};
