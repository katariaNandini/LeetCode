class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        // Use two pointers to track the left and right halves
        int left = low, right = mid + 1;
        
        // Temporary array to store merged result
        vector<int> temp;
        
        // Merge the two halves into the temp array
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }
        
        // Copy remaining elements from the left half (if any)
        while (left <= mid) {
            temp.push_back(nums[left++]);
        }
        
        // Copy remaining elements from the right half (if any)
        while (right <= high) {
            temp.push_back(nums[right++]);
        }
        
        // Copy the merged result back into the original array
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
    
    void ms(vector<int>& nums, int low, int high) {
        if (low >= high) return; // Base case: single element or invalid range
        
        int mid = low + (high - low) / 2; // Avoid potential overflow
        ms(nums, low, mid);       // Sort the left half
        ms(nums, mid + 1, high);  // Sort the right half
        merge(nums, low, mid, high); // Merge the two sorted halves
    }
    
    vector<int> sortArray(vector<int>& nums) {
        ms(nums, 0, nums.size() - 1); // Apply merge sort
        return nums; // Return the sorted array
    }
};
