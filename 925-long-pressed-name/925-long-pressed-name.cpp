class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size(), m  = typed.size(), j = 0;
        if (n > m || (name[0] != typed[0]))
        {
            return false;
        }
        for (int i = 0; i < n; i++)
        {
            if (name[i] == typed[j])
            {
                j++;
            }
            else
            {
               
                while (j < m && (name[i - 1] == typed[j]))
                {
                    j++;
                }
                if ((j == m) || (name[i] != typed[j]))
                {
                    return false;
                }
                j++;
            }
        }
        while (j < m)
        {
            if (typed[j] != name[n - 1])
                return false;
            j++;
        }
        return true;
    }
};