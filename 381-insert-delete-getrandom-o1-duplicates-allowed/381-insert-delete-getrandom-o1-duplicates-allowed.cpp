class RandomizedCollection {
public:
    vector<int> v;
    unordered_map<int, vector<int>> mp;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        bool flag = 0;
        if (!mp[val].size())
        {
            flag = 1;
        }
        mp[val].push_back(v.size());
        v.push_back(val);
        if (flag)
            return true;
        return false;
    }
    
    bool remove(int val) {
        if (!mp[val].size())
        {
            return false;
        }
        if (v.size() == 1)
        {
            mp[val].pop_back();
            v.pop_back();
            // cout<<"aaa"<<"  "; 
            return true;
        }
        int n = mp[val].size();
        // cout<<n<<"n         ";
        int idx = mp[val][n - 1];
        if (idx == v.size() - 1)
        {
            // cout<<"bbbb  ";
            v.pop_back();
            mp[val].pop_back();
            return true;
        }
        // cout<<idx<<"            ";
        v[idx] = v[v.size() - 1];
        v.pop_back();
        mp[val].pop_back();
        mp[v[idx]][mp[v[idx]].size() - 1] = idx;
        sort(mp[v[idx]].begin(), mp[v[idx]].end());
        // mp[v[idx]].push_back(idx);
        // for (int i = 0; i < v.size(); i++)
        //     cout<<v[i]<<"        ";
        // for (int i = 0; i < mp[v[idx]].size(); i++)
        // {
        //     cout<<mp[v[idx]][i]<<" ";
        // }
        // cout<<endl;
        return true;
    }
    
    int getRandom() {
        int n = v.size();
        int r = rand() % n;
        return v[r];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */