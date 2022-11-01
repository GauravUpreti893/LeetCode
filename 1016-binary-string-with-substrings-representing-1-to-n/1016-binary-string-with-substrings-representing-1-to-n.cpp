class Solution {
public:
    bool queryString(string s, int n) {
        for (int i = 1; i <= n; i++)
        {
            bitset<32> b(i);
            string x = b.to_string(), y;
            int j = 0;
            while (x[j] == '0')
                j++;
            for (;j < 32; j++)
                y += x[j];
            if (s.find(y) == string::npos)
            {
                return false;
            }
        }
        return true;
    }
};