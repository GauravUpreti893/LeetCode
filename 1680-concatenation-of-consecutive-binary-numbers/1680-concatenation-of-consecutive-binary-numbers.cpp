class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans = 0, mod = 1e9 + 7, count = 0,x;
        long long int pow = 1;
        x = logb(n) + 1;
        
        ans = n;
        for (int i = n - 1; i >= 1; i--)
        {
            // cout<<x<<endl;
            for (int j = 0; j < x; j++)
            {
                pow *= 2;
                pow = pow % mod;
            }
            ans += (pow *i) % mod;
            // cout<<x<<endl;
            ans = ans % mod;
            // cout<<(i&(i - 1))<<endl;
            
            if ((i&(i + 1)) == 0)
            {
                // cout<<"jfd";
                x--;
            }
            count += x;
        }
        return ans;
    }
};