class Solution {
public:
    int find(int n, vector<int>&tribo)
    {
        if (tribo[n] != -1)
            return tribo[n];
        return tribo[n] = find(n - 1, tribo) + find(n - 2, tribo) + find(n - 3, tribo);
    }
    int tribonacci(int n) {
        vector<int> tribo(n + 1, -1);
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        tribo[0] = 0;
        tribo[1] = 1;
        tribo[2] = 1;
        return find(n, tribo);
    }
};