class TreeAncestor {
public:
    vector<vector<int>> ancestor;
    TreeAncestor(int n, vector<int>& parent) {
        int log = logb(n);
        vector<vector<int>> v(n, vector<int>(log + 1));
        for (int i = 0; i < n; i++)
        {
            v[i][0] = parent[i];
        }
        for (int p = 1; p <= log; p++)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i][p - 1] == -1)
                {
                    v[i][p] = -1;
                }
                else
                v[i][p] = v[v[i][p - 1]][p - 1];
            }
        } 
        ancestor = v;
        // for (int i = 0; i < n; i++)
        // {
        //     for (auto j : ancestor[i])
        //         cout<<j<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;
    }
    int getKthAncestor(int node, int k) {
        int log = logb(k);
        int ances = node;
        while (k != 0)
        {
            ances = ancestor[ances][log];
            if (ances == -1)
                return -1;
            k = k - pow(2,log);
            if (k == 0)
                return ances;
            log = logb(k);
        }
        return ances;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */