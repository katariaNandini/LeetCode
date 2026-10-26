class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
            
    stack<int> st;
        vector<int> mp(nums.size(), -1);
     int n=nums.size();
     
     for(int i=2*n-1;i>=0;i--){
        // if(st.empty()){
        //     mp[nums[i]]=-1;
        //     st.push(nums[i]);
        // }
        // else {
            while(!st.empty()&&st.top()<=nums[i%n]){
              
                 st.pop();
            }
            if(!st.empty())mp[i%n]=st.top();
            else mp[i%n]=-1;
            st.push(nums[i%n]);
        // }
     }
//      vector<int> ans;
//    for(int i=0;i<n;i++){
//     ans.push_back(mp[nums[i]]);
//    }
return mp;

    }
};