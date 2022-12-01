class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        mp['a'] = 1;
        mp['e'] = 2;
        mp['i'] = 3;
        mp['o'] = 4;
        mp['u'] = 5;
        mp['A'] = 6;
        mp['E'] = 7;
        mp['I'] = 8;
        mp['O'] = 9;
        mp['U'] = 10;
        vector<int> v(11, 0);
        for (int i = 0; i < n/2; i++)
        {
            v[mp[s[i]]]++;
        }
        for (int i = n/2; i < n; i++)
        {   
            v[mp[s[i]]]--;
        }
        int sum = 0;
        for (int i = 1; i <= 10; i++)
        {
            sum += v[i];
        }
        if (sum)
            return false;
        return true;
    }
};