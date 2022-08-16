class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expheights = heights;
        sort(expheights.begin(), expheights.end());
        int count = 0;
        int n = heights.size();
        for (int i = 0; i < n; i++)
        {
            if (heights[i] != expheights[i])
                count++;
        }
        return count;
    }
};