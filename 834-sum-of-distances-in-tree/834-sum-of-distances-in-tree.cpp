class Solution {
public:
    int sum0(vector<vector<int>>& list, int p, int s, int grandp, vector<int> &count)
    {
        int sum = 0;
        for (auto i : list[p])
        {
            if (i == grandp) //Then it is already covered.
                continue;
            sum += s + sum0(list, i, s + 1, p, count);// Now i will become parent and p will become grandparent.
            count[p] += count[i];
        }
        count[p]++;
        return sum;
    }
    void sumofall(vector<vector<int>>& list, int p, int grandp, vector<int> &ans, vector<int> &count)
    {
        for (auto i : list[p])
        {
            if (i == grandp) //Then it is already covered.
                continue;
            ans[i] = ans[p] - count[i] + ans.size() - count[i];// Now i will become parent and p will become grandparent.
            sumofall(list, i, p, ans, count);
        }
        
        return;
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> ans(n);
        vector<vector<int>>list(n);
        vector<int> count(n,0);
        int m = edges.size();
        for (int i = 0; i < m; i++)
        {
            list[edges[i][0]].push_back(edges[i][1]);
            list[edges[i][1]].push_back(edges[i][0]);
        }
        ans[0] = sum0(list, 0, 1, -1, count);  //BFS for calculating sum of distances of all the nodes from 0.
        sumofall(list, 0,-1, ans, count);
        return ans;
    }
};