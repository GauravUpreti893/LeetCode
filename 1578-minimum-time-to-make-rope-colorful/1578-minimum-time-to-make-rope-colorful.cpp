class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int mx = 0, p = -1, sum = 0;
            if (colors[i] == colors[i + 1])
            {
                mx = neededTime[i];
                sum = neededTime[i];
                p = i;
            }
            while (i < n - 1 && colors[i] == colors[i + 1])
            {
                if (neededTime[i + 1] > mx)
                {
                    mx = neededTime[i + 1];
                    p = i;
                }
                sum += neededTime[i + 1];
                i++;
            }
            if (mx)
            {
                ans += sum - mx;
            }
        }
        return ans;
    }
};