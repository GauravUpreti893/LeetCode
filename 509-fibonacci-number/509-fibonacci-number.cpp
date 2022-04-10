class Solution {
public:
    int fibo(int n, int* &table)
    {
        if (table[n] == -1)
        {
            table[n] = fibo(n - 1,table) + fibo(n - 2, table);
        }
        return table[n];
    }
    int fib(int n) {
        int *table = new int[n + 1];
        for (int i = 0; i <= n; i++)
            table[i] = -1;
        table[0] = 0;
        if (n != 0)
        table[1] = 1;
        return fibo(n,table);
    }
};