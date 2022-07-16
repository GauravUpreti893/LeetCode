class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int ans = 0;
        int n = stones.size();
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            int diff = abs(x - y);
            if (diff)
            {
                pq.push(diff);
            }
        }
        if (!pq.empty())
            return pq.top();
        else
            return 0;
    }
};