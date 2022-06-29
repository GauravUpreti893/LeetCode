class StockSpanner {
public:
    stack<pair<int,int>> st;
    int prev;
    int count;
    int i;
    StockSpanner() {
        i = 0;
        prev = 0;
        count = 1;
    }
    
    int next(int price) 
    {
        int ans;
        while (!st.empty())
        {
           if (price >= st.top().first)
           {
               prev = st.top().second;
               st.pop();
           }
           else
           {
               ans =  (i - st.top().second);
               break;
           }
       }
       if (st.empty())
       {
           count =  i - prev + count;
           ans = count;
       }
       st.push({price,i});
       i++;
       return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */