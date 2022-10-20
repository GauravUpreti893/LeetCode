class Solution {
public:
    string intToRoman(int num) {
        vector<int> v{1000, 500, 100, 50, 10, 5, 1};
        unordered_map<int, char> mp;
        unordered_map<int, int> prefix;
        mp[1000] = 'M';
        mp[500] = 'D';
        mp[100] = 'C';
        mp[50] = 'L';
        mp[10] = 'X';
        mp[5] = 'V';
        mp[1] = 'I';
        prefix[1000] = 100;
        prefix[500] = 100;
        prefix[100] = 10;
        prefix[50] = 10;
        prefix[10] = 1;
        prefix[5] = 1;
        prefix[1] = 0;
        int x;
        string ans;
        for (int i = 0; i < 7; i++)
        {
            x = (num)/ v[i];
            for (int j = 0; j < x; j++)
            {
                ans += mp[v[i]];
            }
            num = num % v[i];
            if ((num + prefix[v[i]]) / v[i] )
            {
                ans += mp[prefix[v[i]]];
                ans += mp[v[i]];
                num = (num + prefix[v[i]]) % v[i];
            }
            if (!num)
                break;
        }
        return ans;
    }
};