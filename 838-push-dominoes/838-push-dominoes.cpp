class Solution {
public:
    string pushDominoes(string dominoes) {
        stack<char> right;
        char left = ' ';
        int n = dominoes.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (dominoes[i] != '.')
            {
                right.push(dominoes[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (dominoes[i] == '.')
            {
                if (left != ' ' && !right.empty())
                {
                    if (left == right.top())
                        dominoes[i] = left;
                }
                else if (left != ' ' || !right.empty())
                {
                    if ((left == 'R') || (!right.empty() && right.top() == 'L'))
                        dominoes[i] = left != ' '?left:right.top();
                }
            }
            else
            {
                left = dominoes[i];
                right.pop();
                int count = 0;
                int j = i + 1;
                while (j < n && dominoes[j] == '.')
                {
                    count++;
                    j++;
                }
                if ((j == n && dominoes[i] == 'R') ||  (j != n && (dominoes[j] == dominoes[i])))
                {
                    for (int k = i + 1; k < j; k++)
                        dominoes[k] = dominoes[i];
                }
                else if (dominoes[i] == 'R' && dominoes[j] == 'L')
                {
                    int k = i + 1, c = 0;
                    while (c != count/2)
                    {
                        dominoes[k++] = 'R';
                        c++;
                    }
                    c = 0;
                    if (count % 2)
                        k++;
                    while (c != count/2)
                    {
                        dominoes[k++] = 'L';
                        c++;
                    }
                }
                i = j - 1;
            }
        }
        return dominoes;
    }
};