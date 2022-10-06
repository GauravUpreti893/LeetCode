class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
        return;
    }
    
    string get(string key, int timestamp) {
        if (!mp[key].size())
            return "";
        int lo = 0, hi = mp[key].size() - 1, mid;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (mp[key][mid].first == timestamp)
            {
                return mp[key][mid].second;
            }
            else if (mp[key][mid].first < timestamp)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        // cout<<lo<<endl;
        if (lo <= 0 || lo > mp[key].size())
            return "";
        return mp[key][lo - 1].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */