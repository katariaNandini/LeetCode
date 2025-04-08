class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;
        while(true){
            unordered_set<int> st;
            bool hasduplicate=false;
            for(int num:nums){
                if(st.count(num)) {hasduplicate=true;
                break;}
                st.insert(num);
            }
            if(!hasduplicate) break;
            
                if(nums.size()<3){
                    nums.clear();
                }
                else {
                    nums.erase(nums.begin(),nums.begin()+3);
                }
op++;
            
        }
        return op;
    }
};