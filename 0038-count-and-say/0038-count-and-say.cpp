class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string prev = countAndSay(n - 1);
        int m = prev.size();
        string s;
        for (int i = 0; i < m; i++)
        {
            char c = prev[i];
            int count = 0;
            while (i < m && prev[i] == c)
            {
                count++;
                i++;
            }
            char c1 = count + '0';
            s += c1;
            s += c;
            i--;
        }
        return s;
    }
};