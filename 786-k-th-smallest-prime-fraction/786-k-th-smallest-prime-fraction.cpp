class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        int m = n*(n - 1)/2;
        priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<pair<double,pair<int,int>>>> minheap;
        for (int i = 0; i < n - 1; i++)
        {
            minheap.push({(arr[i]/(arr[n - 1]/1.0)),{i,n - 1}});
        }
        int p1,p2;
        pair<double,pair<int,int>> p;
        for (int i = 0; i < k; i++)
        {
            p = minheap.top();
            minheap.pop();
            p1 = p.second.first;
            p2 = p.second.second;
            if (p2 > (p1 + 1))
            {
                minheap.push({(arr[p1]/(arr[p2 - 1]/1.0)),{p1,p2 - 1}});
            }
            
        }
        vector<int> ans(2);
        ans[0] = arr[p1];
        ans[1] = arr[p2];
        return ans;
    }
};