class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<int> ans(2);
        int n = arr.size();
        int i = 0, j = n - 1;
        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;
        vector<int> pos(n, 0), den(n);
        double d;
        for (int i = 0; i < n; i++)
        {
            d = arr[0]/(arr[i]/1.0);
            // den[i] = i + 1;
            pq.push({d,i});
        }
        double v;
        int idx;
        for (int i = 0; i < k; i++)
        {
            v = pq.top().first;
            idx = pq.top().second;
            pq.pop();
            pos[idx]++;
            if (v != 1)
            {
                d = arr[pos[idx]]/(arr[idx]/1.0);
                pq.push({d, idx});
            }
            
        }
        ans[0] = arr[pos[idx] - 1];
        ans[1] = arr[idx];
        return ans;
    }
};