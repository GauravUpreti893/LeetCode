class Solution {
public:
    bool check(vector<int>&weights, int days, int mid)
    {
        int count = 0;
        int n = weights.size();
        int i = 0;
        int w;
        while (i < n)
        {
            w = 0;
            if (count == days)
            {
                return false;
            }
            while (i < n)
            {
                w += weights[i];
                if (w > mid)
                {
                    count++;
                    break;
                }
                i++;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = 1, hi = 25000000;
        int mid;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (check(weights, days, mid))
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return lo;
    }
};