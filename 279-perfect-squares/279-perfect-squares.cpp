class Solution {
public:
    int nos(int n, int* &table)
    {
        if (table[n] == 10001)
        {
            int i = 1;
            while (i*i <= n)
            {
                table[n] = min(table[n],nos(n - i*i,table) + 1);
                i++;
            }
        }
        return table[n];
    }
    int numSquares(int n) {
        int *table = new int[n + 1];
        for (int i = 0; i <= n; i++)
        {
            table[i] = 10001;
        }
        table[0] = 0;
        table[1] = 1;
        return nos(n,table);
    }
};