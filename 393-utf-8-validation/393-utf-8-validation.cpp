class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int n = data.size();
        int x;
        for (int i = 0; i < n; i++)
        {
            x = data[i];
            if (!(x>>7))
            {
                continue;
            }
            else if (x>>5 == 0b110)
            {
                i++;
                if (i == n)
                    return false;
                x = data[i];
                if (x>>6 != 0b10)
                    return false;
            }
            else if (x>>4 == 0b1110)
            {
                for (int j = 0; j < 2; j++)
                {
                    i++;
                    if (i == n)
                    return false;
                    x = data[i];
                    if (x>>6 != 0b10)
                        return false;
                }
            }
            else if (x>>3 == 0b11110)
            {
                for (int j = 0; j < 3; j++)
                {
                    i++;
                    if (i == n)
                    return false;
                    x = data[i];
                    if (x>>6 != 0b10)
                        return false;
                }
            }
            else
                return false;
        }
        return true;
    }
};