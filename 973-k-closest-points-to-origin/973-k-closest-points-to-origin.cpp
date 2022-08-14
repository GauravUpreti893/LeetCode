class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        int n = points.size();
        priority_queue<pair<double,int>> mxheap; // To always get the largest element in our heap of size k, so that if our curr distance is smaller than this max dis, then we will pop this one and put our curr in heap.
        double dis;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            x = points[i][0];
            y = points[i][1];
            dis = sqrt(x*x + y*y);
            if (mxheap.size() < k)
            {
                mxheap.push({dis, i});
            }
            else
            {
                if (mxheap.top().first > dis)
                {
                    mxheap.pop();
                    mxheap.push({dis, i});
                }
            }
        }
        int idx;
        for (int i = 0; i < k; i++)
        {
            vector<int> v(2);
            idx = mxheap.top().second;
            v[0] = points[idx][0];
            v[1] = points[idx][1];
            mxheap.pop();
            ans.push_back(v);
        }
        return ans;
    }
};