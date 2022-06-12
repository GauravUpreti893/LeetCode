class Solution {
public:
    bool check(vector<int>&piles, int h, int k)
    {
        int n = piles.size();
        int i = 0,hours = 0;
        while (i < n)
        {
            hours += ceil((piles[i]/(k/1.0)));
            // cout<<hours<<endl;
            if (hours > h)
            {
                return false;
            }
            i++;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = 1e9;
        int mid;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (check(piles, h, mid))
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
            // cout<<hi<<" "<<lo<<endl;
        }
        return lo;
    }
};