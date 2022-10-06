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
        int i = mp[key].size() - 1;
        while (i >= 0)
        {
            if (mp[key][i].first <= timestamp)
            {
                return mp[key][i].second;
            }
            i--;
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */