class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int n=boxes.size();
        for(int i=0;i<n;i++){
            int index=0;
            for(int j=0;j<n;j++){
                if(j==i)continue;
                else
                index+=  (boxes[j] - '0')*abs(j-i);
            }
            ans.push_back(index);
        }
        return ans;
    }
};