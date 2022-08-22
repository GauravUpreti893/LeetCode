struct pairHash {
  size_t operator()(const pair<int, int> &x) const { return x.first ^ x.second; }
};
class Solution {
public:
    vector<int> gridIllumination(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries) {
        unordered_set<pair<int, int>, pairHash> mp;
        
        int m = lamps.size();
        unordered_map<int,int> row, col, diag1, diag2;
        for (int i = 0; i < m; i++)
        {
            int x = lamps[i][0], y = lamps[i][1];
            if (mp.find({x, y}) == mp.end())
            {
            // if (x >= n || y >= n)
            //     continue;
            mp.insert({x, y});
            row[x]++;
            col[y]++;
            diag1[x - y]++;
            diag2[x + y]++;
            }
        }
        m = queries.size();
        vector<int> ans(m,0);
        // cout<<m<<endl;
        for (int i = 0; i < m; i++)
        {
            int x = queries[i][0], y = queries[i][1];
            if (row[x] || col[y] || diag1[x - y] || diag2[x + y])
            {
                ans[i] = 1;
            }
            else
            {
                ans[i] = 0; 
                continue;
            }
             x = queries[i][0];
             y = queries[i][1];
            for (int a = x - 1; a <= x + 1; a++)
            {
                for (int b = y - 1; b <= y + 1; b++)
                {
                    if ((mp.find({a, b}) != mp.end()))
                    {
                    mp.erase({a,b});
                    cout<<a<<" "<<b<<"     ";
                    row[a]--;
                    col[b]--;
                    diag1[a - b]--;
                    diag2[a + b]--;
                    // cout<<row[a]<<" "<<col[b]<<" "<<diag[a + b]<<" "<<diag[a - b]<<endl;
                    }
                }
            }
        }
        return ans;
    }
};