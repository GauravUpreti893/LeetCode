class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n, 0), right(n, 0);
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            left[i] = mx;
            mx = max(mx, height[i]);
        }
        mx = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            right[i] = mx;
            mx = max(mx, height[i]);
        }
        int water = 0;
        int mn;
        for (int i = 0; i < n; i++)
        {
            mn = min(left[i], right[i]);
            if (mn > height[i])
            {
                water += mn - height[i];
            }
        }
        return water;
    }
};