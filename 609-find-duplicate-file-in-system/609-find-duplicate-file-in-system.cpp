class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> ans;
        int n = paths.size();
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < n; i++)
        {
            string root;
            int j = 0;
            while (paths[i][j] != ' ')
            {
                root += paths[i][j];
                j++;
            }
            root += '/';
            j++;
            while (paths[i][j] != '\0')
            {
                string fname;
                while (paths[i][j] != '(')
                {
                    fname += paths[i][j];
                    j++;
                }
                j++;
                string content;
                while (paths[i][j] != ')')
                {
                    content += paths[i][j];
                    j++;
                }
                mp[content].push_back(root + fname);
                j++;
                if (paths[i][j] == '\0')
                    break;
                j++;
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if ((it->second).size() > 1)
            ans.push_back(it->second);
        }
        return ans;
    }
};