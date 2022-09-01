class Solution {
public:
    int fibonacci(int n, vector<int>&fibo)
    {
        if (fibo[n] != -1)
            return fibo[n];
        return fibo[n] = fibonacci(n - 1, fibo) + fibonacci(n - 2, fibo);
    }
    int fib(int n) {
        if (n <= 1)
            return n;
        vector<int> fibo(n + 1, -1);
        fibo[0] = 0;
        fibo[1] = 1;
        return fibonacci(n, fibo);
    }
};