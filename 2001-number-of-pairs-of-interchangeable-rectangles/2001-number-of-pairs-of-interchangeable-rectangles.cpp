class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, int> mp;
        int n = rectangles.size();
        long long ans = 0;
        double d;
        for (int i = 0; i < n; i++)
        {
            d = rectangles[i][0]/(rectangles[i][1]/1.0);
            ans += mp[d];
            mp[d]++;
        }
        return ans;
    }
};