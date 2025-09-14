class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        multiset<int>st;
        int n=nums.size();
        int op=0;
        for(int i=0;i<n;i++){
              int find=k-nums[i];
            auto it=st.find(find);
          
            if(it!=st.end()){
                st.erase(it);
                op++;
            }
            else st.insert(nums[i]);
        }
    return op;

    }
};