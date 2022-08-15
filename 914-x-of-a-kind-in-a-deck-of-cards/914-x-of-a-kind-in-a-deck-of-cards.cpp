class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[deck[i]]++;
        }
        int gcd = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
                return false;
            gcd = __gcd(gcd, it->second);
            if (gcd == 1)
                return false;
        }
        return true;
    }
};