/*
Intuition:
We are given a histogram (array of bar heights) and need to find the largest rectangular area.
For each bar, we calculate the maximum width where this bar is the shortest one.
This is done using a monotonic increasing stack to find the Next Smaller Element (NSE)
and Previous Smaller Element (PSE) indices efficiently.

Algorithm:
1. Use a stack to store indices of increasing heights.
2. For each bar:
   - While the current height is less than the top of the stack:
     → pop the top and compute area using it as the smallest height.
     → Width = i - PSE - 1, where PSE = new top after popping.
   - Push the current index onto the stack.
3. After traversal, process any remaining bars in the stack as if the right boundary is at n.
4. Return the maximum area found.
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int> st;
        int sum=0;
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[i]<arr[st.top()]){
                int ele=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty()?-1:st.top();
                sum=max(sum,arr[ele]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            int nse=n;
            int pse=st.empty()?-1:st.top();
            sum=max(sum,arr[ele]*(nse-pse-1));
        }
        return sum;
    }
};