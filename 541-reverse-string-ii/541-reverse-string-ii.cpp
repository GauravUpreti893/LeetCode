class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int i = 0, j = k - 1, x  = 2*k;
        while (i < n)
        {
            if (j >= n)
            j = n - 1;
            while (i < j)
            {
                swap(s[i++], s[j--]);
            }
            i = x;
            j = x + k - 1;
            x += 2*k;
        }
        return s;
    }
};