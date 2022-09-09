bool compare(vector<int> &a, vector<int>&b)
{
    if (a[0] != b[0])
    {
        return a[0] <= b[0];
    }
    else
    {
        return a[1] >= b[1];
    }
}
class Solution {
public:
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int n = properties.size();
        sort(properties.begin(), properties.end(), compare);
        int mx = 0, ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (properties[i][1] < mx)
            {
                ans++;
            }
            else
            {
                mx = properties[i][1];
            }
        }
        return ans;
    }
};