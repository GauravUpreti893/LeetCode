class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[j])
            {
                j--;
                if (j < 0)
                {
                    
                    i++;
                    if (i < n)
                    {
                        j = 0;
                        s[j] = s[i];
                    }
                }
            }
            else
            {
                j++;
                s[j] = s[i];
            }
            // cout<<j<<endl;
        }
        return s.substr(0,j + 1);
    }
};