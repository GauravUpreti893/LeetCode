class RandomizedCollection {
public:
    vector<pair<int, int>> v;
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
        v.push_back({val, mp[val].size() - 1});
        if (flag)
            return true;
        return false;
    }
    
    bool remove(int val) {
        if (!mp[val].size())
        {
            return false;
        }
        pair<int,int> p = v.back();
        v[mp[val][mp[val].size() - 1]] = p;
        mp[p.first][p.second] = mp[val][mp[val].size() - 1];
        mp[val].pop_back();
        v.pop_back();
        return true;
    }
    
    int getRandom() {
        int n = v.size();
        int r = rand() % n;
        return v[r].first;
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */