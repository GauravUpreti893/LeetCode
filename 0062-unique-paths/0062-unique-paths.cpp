class Solution {
public:
    int uniquePaths(int m, int n) {
        long long int x = m - 1 + n - 1;
        long long int ans = 1;
        if (n > m)
            swap(n, m);
        for (int i = 0; i < m - 1; i++)
        {
            ans *= (x - m + 2 + i);
            ans /= (i + 1);
        }
        return ans;
    }
};