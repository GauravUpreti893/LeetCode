class StockSpanner {
public:
    stack<pair<int, int>> st;
    int n;
    StockSpanner() {
        n = 0;
    }
    
    int next(int price) {
        n++;
        while (!st.empty() && st.top().first <= price)
        {
            st.pop();
        }
        if (st.empty())
        {
            st.push({price, n});
            return n;
        }
        else
        {
            int idx = st.top().second;
            st.push({price, n});
            return n - idx;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */