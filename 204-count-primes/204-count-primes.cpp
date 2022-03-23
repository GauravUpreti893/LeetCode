class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        int *arr = new int[n];
        for (int i = 2; i < n; i++)
        {
            arr[i] = 1;
        }
        arr[0] = 0;
        arr[1] = 0;
        int ans = 0;
        for (int i = 2; i < sqrt(n);i++)
        {
            if (arr[i])
            {
                for (int j = i*i; j < n; j+=i)
                {
                    arr[j] = 0;
                }
            }
        }
        for (int i = 2; i < n; i++)
        {
            if (arr[i])
                ans++;
        }
        return ans;
        
    }
};