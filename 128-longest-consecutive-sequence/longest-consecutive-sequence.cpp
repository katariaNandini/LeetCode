class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
          for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        if(n==0) return 0;
        int count=1;
        int maxi=INT_MIN;
        for(auto it:st){
            count=1;
            if(st.find(it-1)==st.end()){
                int num=it;
                while(st.find(num+1)!=st.end()){
                    num++;
                    count++;

                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};