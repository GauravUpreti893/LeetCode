class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int count = 0;
        priority_queue<int> q;
        int n = flips.size();
        for(int i = 0; i < n; i++)
        {
            q.push(flips[i]);
            int mx = q.top();
            if (mx == i + 1)
            {
                count++;
            }
        }
        return count;
        
        }
};