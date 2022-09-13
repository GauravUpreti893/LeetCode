class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int n = data.size();
        for (int t = 0; t < n; t++)
        {
            string s;
            char c;
            int r, m = data[t];
            while (m != 0)
            {
                r = m % 2;
                c = r + '0';
                s = c + s;
                m /= 2;
            }
            while (s.size() < 8)
                s = '0' + s;
            int count = 0;
            while (s[count] == '1')
            {
                count++;
            }
            if (count > 4 || count == 1)
                return false;
            for (int j = 0; j < count - 1; j++)
            {
                // cout<<count<<" "<<t<<endl;
                string s;
                char c;
                t++;
                if (t == n)
                    return false;
                int r, m = data[t];
                while (m != 0)
                {
                    r = m % 2;
                    c = r + '0';
                    s = c + s;
                    m /= 2;
                }
                while (s.size() < 8)
                s = '0' + s;
                if (s[0] != '1' || s[1] != '0')
                    return false;
                // cout<<s<<endl;
            }
        }
        return true;
    }
};