class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp, mp1;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            mp1[it->second]++;
            if(mp1[it->second] == 2)
                return false;
        }
        return true;
    }
};