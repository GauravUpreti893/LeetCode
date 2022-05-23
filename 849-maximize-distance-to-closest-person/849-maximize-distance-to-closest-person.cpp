class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int> left(n), right(n);
        int count = 0;
        left[0] = 1e5;
        for (int i = 1; i < n; i++)
        {
            if (seats[i - 1] == 0)
            {
                count++;
            }
            else
                count = 0;
            left[i] = count;
        }
        count = 0;
        right[n - 1] = 1e5;
        for (int i = n - 2; i >= 0; i--)
        {
            if (seats[i + 1] == 0)
            {
                count++;
            }
            else
                count = 0;
            right[i] = count;
        }
        int mx = 0,ans = 0;
        // ans = right[i];
        for (int i = 0; i < n ;i++)
        {
            if (seats[i] == 0)
            {
                 mx = min(left[i],right[i]);
            ans = max(mx + 1, ans);
            }
           
        }
        // ans = max(ans,left[n - 1]);
        return ans;
    }
};