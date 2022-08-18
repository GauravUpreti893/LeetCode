class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> freq;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        priority_queue<int> pq;
        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            pq.push(it->second);
        }
        int val = n/2;
        int ans = 0;
        while (val > 0)
        {
            val -= pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};