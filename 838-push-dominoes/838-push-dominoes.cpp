class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size(), p;
        char c = ' ';
        vector<int> dis(n);
        for (int i = 0; i < n; i++)
        {
            if (dominoes[i] == '.' && c != '.')
            {
                if (c == 'R')
                {
                    dominoes[i] = c;
                    dis[i] = i - p;
                }
                else
                {
                    dis[i] = n + 1;
                }
            }
            else if (dominoes[i] == '.' && c == '.')
            {
                dis[i] = n + 1;
            }
            else if (dominoes[i] != '.')
            {
                c = dominoes[i];
                p = i;
                dis[i] = 0;
            }
        }
        c = ' ';
        for (int i = n - 1; i >= 0; i--)
        {
            if (dis[i])
            {
                if (c == 'L')
                {
                    if (dis[i] == p - i)
                    {
                        dominoes[i] = '.';
                    }
                    else if (dis[i] > p - i)
                    {
                        dominoes[i] = 'L';
                    }
                }
            }
            else
            {
                c = dominoes[i];
                p = i;
            }
        }
        return dominoes;
    }
};