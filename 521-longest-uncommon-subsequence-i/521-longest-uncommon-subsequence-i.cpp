class Solution {
public:
    int findLUSlength(string a, string b) {
        int n = a.size(), m = b.size();
        if (n != m)
        {
            return max(n,m);
        }
        if (a == b)
        {
            return -1;
        }
        return n;
    }
};