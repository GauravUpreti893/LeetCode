class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3)
            return 0;
        int l = 0, r = n - 1, lmax = 0, rmax = 0, water = 0;
        while (l <= r)
        {
            if (lmax <= rmax)
            {
                water += max(lmax - height[l], 0);
                lmax = max(lmax, height[l++]);
            }
            else
            {
                water += max(rmax - height[r], 0);
                rmax = max(rmax, height[r--]);
            }
        }
        
        return water;
    }
};