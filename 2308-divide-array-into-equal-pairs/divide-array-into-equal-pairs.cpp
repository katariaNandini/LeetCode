class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st[nums[i]]++;
        }
        // int k=st.size();
        // for(int k=0;k<n;k++){
        //     if(st[k].second %2!=0)return false;
        // }
        for(auto it:st){
            if(it.second %2!=0) return false;
        }
        return true;
    }
};