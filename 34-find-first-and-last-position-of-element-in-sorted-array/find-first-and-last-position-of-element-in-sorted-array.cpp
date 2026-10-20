class Solution {
public:
int findlow(vector<int>&nums,int target){
    if(nums.empty()) return -1;
    int n=nums.size();
    if(nums[0]==target) return 0;
    int low=0;
    int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                if(mid==0|| nums[mid-1]!=target) return mid;
                else high=mid-1;
            }
            else if(nums[mid]<target){
                    low=mid+1;
            }
            else high=mid-1;
        }
        return -1;
}
int findhigh(vector<int>&nums,int target){
            if(nums.empty()) return -1;

    int n=nums.size();
    if(nums[n-1]==target) return n-1;
    int low=0;
    int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                if(mid==n-1||nums[mid+1]!=target) return mid;
                else low=mid+1;
            }
            else if(nums[mid]<target){
                    low=mid+1;
            }
            else high=mid-1;
        }
        return -1;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(findlow(nums,target));
        ans.push_back(findhigh(nums,target));
        return ans;
    }
};

