class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     stack<int> st;
     unordered_map<int,int>mp;
     int n2=nums2.size();
     int n1=nums1.size();
     for(int i=n2-1;i>=0;i--){
        // if(st.empty()){
        //     mp[nums2[i]]=-1;
        //     st.push(nums2[i]);
        // }
        // else {
            while(!st.empty()&&st.top()<=nums2[i]){
              
                 st.pop();
            }
            if(!st.empty())mp[nums2[i]]=st.top();
            else mp[nums2[i]]=-1;
            st.push(nums2[i]);
        // }
     }
     vector<int> ans;
   for(int i=0;i<n1;i++){
    ans.push_back(mp[nums1[i]]);
   }
return ans;
    }
};