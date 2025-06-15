class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<n;i++){
            int curr=arr[i];
            bool des=false;
            while(!st.empty()&&st.top() > 0 && arr[i] < 0){
                    int top=abs(st.top());
                    int cur=abs(arr[i]);
                    // st.pop();
                    if(cur>top){
                        // temp.erase(temp.begin() + st.top());
                        st.pop();
                        continue;
                        
                    }  
                    else if(cur==top){
                        des=true;
                        st.pop();
                        break;
                    }
                    else {
                        des=true;
                        break;
                    }

            }
            if(!des)st.push(arr[i]);
        }
        int k=st.size();
       while (!st.empty()){
            int temp=st.top();
            st.pop();
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};