class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        map<int,int> mp;
        int i=0,j=0,count=0;
        int n=nums.size();
        while(j<n){
            mp[nums[j]]++;
            
            while(mp.size()>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;
            }
            if(mp.size()<=k){
                count+=j-i+1;
            }
            j++;
        }
        int i1=0,j1=0,count1=0;
        // int n=nums.size();
        // if(k==0) return count;
                map<int, int> mp2;

        while(j1<n){
            mp2[nums[j1]]++;
            
            while(mp2.size()>k-1){
                mp2[nums[i1]]--;
                if(mp2[nums[i1]]==0)mp2.erase(nums[i1]);
                i1++;
            }
            if(mp2.size()<=k-1){
                count1+=j1-i1+1;
            }
            j1++;
        }
return count-count1;
    }
};