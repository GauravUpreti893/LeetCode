class Solution {
public:
    int ladderLength(string& beginWord, string& endWord, vector<string>& wordList) {
        int n = wordList.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[wordList[i]] = 1;
        }
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        string top;
        int l;
        mp[beginWord] = 0;
        int m = beginWord.size();
        char t;
        while (!q.empty())
        {
            top = q.front().first;
            l = q.front().second;
            q.pop();
            if (top == endWord)
                return l;
            for (int i = 0; i < m; i++)
            {
                t = top[i];
                for (int j = 0; j < 26; j++)
                {
                    top[i] = j + 'a';
                    if (mp[top])
                    {
                        q.push({top, l + 1});
                        mp[top] = 0;
                    }
                }
                top[i] = t;
            }
        }
        return 0;
    }
};