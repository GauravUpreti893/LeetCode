class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        if (x <= arr[0])
        {
            for (int i = 0; i < k; i++)
                ans.push_back(arr[i]);
            return ans;
        }
        if (x >= arr[n - 1])
        {
            for (int i = n - k; i < n; i++)
                ans.push_back(arr[i]);
            return ans;
        }
        for (int i = 1; i < n; i++)
        {
            if (x <= arr[i])
            {
                int a = i - 1, b = i;
                for (int j = 0; j < k; j++)
                {
                    if (a >= 0 && b < n)
                    {
                        if (abs(x - arr[a]) <= abs(x - arr[b]))
                        {
                            ans.push_back(arr[a--]);
                        }
                        else
                        {
                            ans.push_back(arr[b++]);
                        }
                    }
                    else if (a >= 0)
                        ans.push_back(arr[a--]);
                    else if (b < n)
                        ans.push_back(arr[b++]);
                }
                sort(ans.begin(), ans.end());
                return ans;
            }
        }
        return ans;
    }
};