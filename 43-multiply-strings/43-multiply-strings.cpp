class Solution {
public:
    string multiply(string& num1, string& num2) {
        int n = num1.size();
        int m = num2.size();
        int carry;
        int rs;
        char c;
        if (num1 == "0" || num2 == "0")
            return "0";
        if (n >= m)
        {
            vector<string> res(m,""); 
            for (int i = m - 1; i >= 0; i--)
            {
                carry = 0;
                for (int j = n - 1; j >= 0; j--)
                {
                    rs = ((num1[j] - 48) * (num2[i] - 48)) + carry;
                    carry = rs/10;
                    c = (rs % 10) + 48;
                    res[i] = c + res[i];   
                }
                if (carry != 0)
                {
                    c = carry + 48;
                    res[i] = c + res[i];
                }
                for (int j = i + 1; j < m; j++)
                {
                    res[i] += '0';
                }
            }
            for (int i = 0; i < m; i++)
            {
                cout<<res[i]<<endl;
            }
            carry = 0;
            vector<int> size(m);
            int mx = 0;
            for (int i = 0; i < m; i++)
            {
                size[i] = res[i].size();
                mx = max(mx, size[i]);
            }
            string ans = "";
            cout<<mx<<endl;
            for (int i = 1; i <= mx; i++)
            {
                rs = 0;
                for (int j = 0; j < m; j++)
                {
                    if (size[j] >= i)
                    {
                        rs += res[j][size[j] - i] - 48;
                    }
                }
                rs += carry;
                carry = rs / 10;
                c = (rs % 10) + 48;
                ans = c + ans;
            }
            if (carry != 0)
            {
                 c = carry + 48;
                 ans = c + ans;
            }
            return ans;
            
        }
        else
        {
            vector<string> res(n,""); 
            for (int i = n - 1; i >= 0; i--)
            {
                carry = 0;
                for (int j = m - 1; j >= 0; j--)
                {
                    rs = ((num2[j] - 48) * (num1[i] - 48)) + carry;
                    carry = rs/10;
                    c = (rs % 10) + 48;
                    res[i] = c + res[i];   
                }
                if (carry != 0)
                {
                    c = carry + 48;
                    res[i] = c + res[i];
                }
                for (int j = i + 1; j < n; j++)
                {
                    res[i] += '0';
                }
            }
            // for (int i = 0; i < n; i++)
            // {
            //     cout<<res[i]<<endl;
            // }
            carry = 0;
            vector<int> size(n);
            int mx = 0;
            for (int i = 0; i < n; i++)
            {
                size[i] = res[i].size();
                mx = max(mx, size[i]);
            }
            string ans = "";
            // cout<<mx<<endl;
            for (int i = 1; i <= mx; i++)
            {
                rs = 0;
                for (int j = 0; j < n; j++)
                {
                    if (size[j] >= i)
                    {
                        rs += res[j][size[j] - i] - 48;
                    }
                }
                rs += carry;
                carry = rs / 10;
                c = (rs % 10) + 48;
                ans = c + ans;
            }
            if (carry != 0)
            {
                 c = carry + 48;
                 ans = c + ans;
            }
            return ans;
        }
    }
};