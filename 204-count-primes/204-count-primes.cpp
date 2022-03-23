class Solution {
public:
    int countPrimes(int n) {
        if (n<=2)
            return 0;
        vector<int> iscomposite(n,0);
        int ans = 0;
        iscomposite[0] = -1;
        iscomposite[1] = -1;
        for (int i = 2; i < n; i++)
        {
            if (iscomposite[i] == 0)
            {
                ans++;
                int j = 2;
                while (i*j < n)
                {
                    iscomposite[i*j] = 1;
                    j++;
                }
            }
        }
        return ans;
    }
};