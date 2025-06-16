/*
Intuition:
We need to calculate the stock span for each day's price — i.e., the number of consecutive
days (including today) the price was less than or equal to today's price. This is similar to
"Next Greater to Left" problems and is solved using a monotonic stack.

To do this efficiently, we maintain a stack of {price, index} pairs in decreasing order of price.
For each new price, we pop all smaller or equal prices, and compute the span as:
    span = current_index - index of previous higher price.

Algorithm:
1. Maintain a stack of pairs (price, index) in decreasing order of price.
2. For each new price:
   a. Increment index.
   b. Pop elements from the stack while top().price <= current price.
   c. Calculate span = current_index - (stack top index or -1 if empty).
   d. Push (price, index) onto the stack.
3. Return the span.
*/


class StockSpanner {
public:
stack<pair<int,int>> st;
int index=-1;
    StockSpanner() {
        while (!st.empty()) st.pop();
        index=-1;
    }
    
    int next(int price) {
        index++;
        while(!st.empty()&&st.top().first<=price)st.pop();
        int ans=index-(st.empty()?-1:st.top().second);
        st.push({price,index});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */