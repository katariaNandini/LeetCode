class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=(m+n);
        int gap=len/2+(len%2);
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        int left=0;
        int right=gap;
        while(gap>0){
             left=0;
            right=gap;
            while(left<m+n&&right<m+n){
                if(nums1[left]>nums1[right])swap(nums1[left],nums1[right]);
                left++;
                right++;
            }
            
            if (gap == 1) break;
            gap=gap/2+(gap%2);
            left=0;
            right=left+gap;
        }

    }
};