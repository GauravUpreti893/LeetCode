class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int n = answers.size();
        for (int i = 0; i < n; i++)
        {
            mp[answers[i]]++;
        }
        int ans = 0, totalRabbitsOfSameColor, freq, totalRabbits;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            totalRabbitsOfSameColor = it->first + 1;
            freq = it->second;
            totalRabbits = totalRabbitsOfSameColor * (ceil(freq/(totalRabbitsOfSameColor/1.0)));
            ans += totalRabbits;
        }
        return ans;
    }
};