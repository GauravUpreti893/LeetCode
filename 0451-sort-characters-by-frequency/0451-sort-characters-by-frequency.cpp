class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        vector<pair<int, char>> freq(75);
        for (int i = 0; i < 75; i++)
        {
            freq[i].second = i + 48;
            freq[i].first = 0;
        }
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 48].first++;
        }
        sort(freq.begin(), freq.end(), greater<pair<int, char>>());
        s = "";
        for (int i = 0; i < 75; i++)
        {
            for (int j = 0; j < freq[i].first; j++)
            {
                s += freq[i].second;
            }
        }
        return s;
    }
};