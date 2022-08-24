class Solution {
public:
    int trap(vector<int>& height) {
        int r = height.size() - 1, l = 0, lmx = 0, rmx = 0, ans = 0;
        if (height.size() < 3)
            return 0;
        while (l <= r)
        {
            if (lmx <= rmx)
            {
                if (height[l] > lmx)
                {
                    lmx = height[l];
                }
                else
                    ans += lmx - height[l];
                l++;
            }
            else
            {
                if (height[r] > rmx)
                {
                    rmx = height[r];
                }
                else
                {
                    ans += rmx - height[r];
                }
                r--;
            }
        }
        return ans;
    }
};