class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int mn = 2*1e6;
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) == mn)
            {
                vector<int> v(2);
                v[0] = arr[i - 1];
                v[1] = arr[i];
                ans.push_back(v);
            }
        }
        return ans;
    }
};