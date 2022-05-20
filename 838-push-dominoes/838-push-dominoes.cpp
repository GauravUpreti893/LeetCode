class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> left(n), right(n);
        right[0] = 0;
        string ans;
        bool flag = 0;
        if (dominoes[0] == 'R')
            flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (dominoes[i] == '.' && flag)
            {
                right[i] = right[i - 1] + 1;
            }
            else if (dominoes[i] == 'R')
            {
                flag = 1;
                right[i] = 0;
            }
            else
            {
                flag = 0;
                right[i] = 0;
            }
                
        }
        left[n - 1] = 0;
        flag = 0;
        if (dominoes[n - 1] == 'L')
            flag = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (dominoes[i] == '.' && flag)
            {
                left[i] = left[i + 1] + 1;
            }
            else if (dominoes[i] == 'L')
            {
                flag = 1;
                left[i] = 0;
            }
            else
            {
                flag = 0;
                left[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (left[i] == 0 && right[i] == 0)
                ans += dominoes[i];
            else if (left[i] == 0 && right[i] != 0)
            {
                ans += 'R';
            }
            else if (left[i] != 0 && right[i] == 0)
            {
                ans += 'L';
            }
            else if (left[i] == right[i])
            {
                ans += '.';
            }
            else
            {
                if (left[i] < right[i])
                    ans += 'L';
                else
                    ans += 'R';
            }
        }
        return ans;
    }
};