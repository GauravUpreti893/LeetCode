class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
        int n = matrix.size();
        vector<int> pos(n, 0);
        for (int i = 0; i < n; i++)
        {
            pq.push({matrix[i][0], i});   
        }
        int v, idx;
        for (int i = 0; i < k; i++)
        {
            v = pq.top().first;
            idx = pq.top().second;
            pq.pop();
            pos[idx]++;
            if (pos[idx] < n)
            {
                pq.push({matrix[idx][pos[idx]], idx});
            }
        }
        return v;
    }
};