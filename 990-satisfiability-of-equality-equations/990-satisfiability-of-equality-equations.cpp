class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        int n = equations.size();
        vector<char> v(26);
        for (int i = 0; i < 26; i++)
        {
            v[i] = i + 'a';
        }
        char x, y;
        for (int i = 0; i < n; i++)
        {
            x = equations[i][0];
            y = equations[i][3];
            if (equations[i][1] == '=')
            {
                int p1 = v[y - 'a'], p2 = v[x - 'a'];
                for (int i = 0; i < 26; i++)
                {
                    if (v[i] == p1)
                    {
                       v[i] = p2;
                    }
                } 
            } 
        }
        // for (int i = 0; i < 26; i++)
        //     cout<<v[i]<<" ";
        for (int i = 0; i < n; i++)
        {
            x = equations[i][0];
            y = equations[i][3];
            if (equations[i][1] == '!')
            {
                if (v[x - 'a'] == v[y - 'a'])
                    return false;
            }    
        }
        return true;
    }
};