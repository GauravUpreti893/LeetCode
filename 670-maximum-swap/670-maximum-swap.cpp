class Solution {
public:
    int maximumSwap(int num) {
        if (num < 10)
            return num;
        string s = to_string(num);
        int n = s.length();
        int* arr = new int[n];
        arr[n - 1] = -1;
        char mx = ' ',c;
        int i = n - 2,pos = -1;
        while (i >= 0)
        {
            c = s[i + 1];
            if (c > mx)
            {
                mx = c;
                pos = i + 1;
            }
            arr[i] = pos;
            i--;
        }
        string nw;
        int m;
        for (int i = 0; i < n - 1; i++)
        {
            m = arr[i];
            if (s[m] > s[i])
            {
                for (int j = 0; j < i; j++)
                {
                    nw += s[j];
                }
                nw += s[m];
                for (int j = i + 1; j < m; j++)
                {
                    nw += s[j];
                }
                nw += s[i];
                for (int j = m + 1; j < n; j++)
                {
                    nw += s[j];
                }
                break;
            }
        }
        if (nw.empty())
            return num;
        return stoi(nw);
    }
};