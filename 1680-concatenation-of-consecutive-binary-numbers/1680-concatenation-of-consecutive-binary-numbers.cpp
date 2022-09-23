class Solution {
public:
    int concatenatedBinary(int n) {
        long long int ans = 0, mod = 1e9 + 7;
        string s;
        int x, r;
        char c;
        for (int i = 1; i <= n; i++)
        {
            x = i;
            string st;
            while (x != 0)
            {
                r = x % 2;
                c = r + '0';
                st += c;
                x /= 2;
            }
            reverse(st.begin(), st.end());
            // cout<<st<<endl;
            s += st;
        }
        // cout<<s<<endl;
        int sz = s.size();
        long long int pow = 1;
        for (int i = sz - 1; i >= 0; i--)
        {
            ans += ((s[i] - 48)*pow) % mod;
            pow = pow * 2;
            pow %= mod;
            // cout<<ans<<endl;
        }
        return ans % mod;
    }
};