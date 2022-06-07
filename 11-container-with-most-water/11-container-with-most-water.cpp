class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1,h;
        int ans = 0;
        while (i < j)
        {
            h = min(height[i], height[j]);
            ans = max(ans, (j - i)*h);
            while (i < j && height[i] <= h)
            {
                i++;
            }
            while (i < j && height[j] <= h)
            {
                j--;
            }   
        }
        return ans;
        
   }
};