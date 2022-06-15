class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        int m = n*(n - 1)/2;
        vector<pair<double,pair<int,int>>> v(m);
        int c = 0;
        for (int i = 0; i < n;i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                v[c++].first = arr[i]/(arr[j]/1.0);
                v[c - 1].second = {arr[i],arr[j]};
            }
        }
        sort(v.begin(),v.end());
        vector<int> ans(2);
        ans[0] = v[k - 1].second.first;
        ans[1] = v[k - 1].second.second;
        return ans;
    }
};