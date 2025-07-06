class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int count1=0,count2=0,ele1=INT_MAX,ele2=INT_MAX;
       vector<int> ans;
       int n=nums.size();
       for(int i=0;i<n;i++){
        if(count1==0&&nums[i]!=ele2){
            count1++;
            ele1=nums[i];
        }
        else if(count2==0&&nums[i]!=ele1){
            count2++;
            ele2=nums[i];
        }
        else if(nums[i]==ele1)count1++;
        else if(nums[i]==ele2)count2++;
        else{
            count1--;
            count2--;
        }
       } 
       int finalcount1=0;

       int finalcount2=0;
       for(int i=0;i<n;i++){
        if(nums[i]==ele1)finalcount1++;
        if(nums[i]==ele2)finalcount2++;
       }
       if(finalcount1>n/3)ans.push_back(ele1);
       if(finalcount2>n/3)ans.push_back(ele2);
    return ans;
    }
};