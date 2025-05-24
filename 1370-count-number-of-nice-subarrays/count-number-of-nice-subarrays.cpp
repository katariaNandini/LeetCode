class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int odd=0,i=0,j=0,count=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]%2!=0)odd++;
            while(odd>k){
            if(nums[i]%2!=0){odd--;
            }i++;
                
            }
            count+=j-i+1;
            j++;

        }
        int j2=0,i2=0,count2=0,odd2=0;
        while(j2<n){
            if(nums[j2]%2!=0)odd2++;
            while(odd2>k-1){
            if(nums[i2]%2!=0){odd2--;
            }i2++;
                
            }
             count2+=j2-i2+1;
            j2++;

        }
        return count-count2;
    }
};