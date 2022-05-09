class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> ans;
        if (n == 0)
            return ans;        
        vector<vector<char>>mapping(10);
        char c = 'a';
        for (int i = 2; i < 10; i++)
        {
            
            mapping[i].push_back(c);
            c++;
            mapping[i].push_back(c);
            c++;
            mapping[i].push_back(c);
            c++;
            if (i == 7)
            {
                mapping[i].push_back(c);
                c++;
            }
        }
        mapping[9].push_back(c);
        if (n == 1)
        {
            for (auto i : mapping[digits[0] - 48])
            {
                string s;
                s = i;
                ans.push_back(s);
            }
        }
        else if (n == 2)
        {
            for (auto i: mapping[digits[0] - 48])
            {
                for (auto j: mapping[digits[1] - 48])
                {
                    string s;
                    s = i;
                    s += j;
                    ans.push_back(s);
                }
            }
        }
        else if (n == 3)
        {
            for (auto i: mapping[digits[0] - 48])
            {
                for (auto j: mapping[digits[1] - 48])
                {
                    for (auto k : mapping[digits[2] - 48])
                    {
                        string s;
                        s = i;
                        s += j;
                        s += k;
                        ans.push_back(s);
                    }
                    
                }
            }
        }
        else
        {
            for (auto i: mapping[digits[0] - 48])
            {
                for (auto j: mapping[digits[1] - 48])
                {
                    for (auto k : mapping[digits[2] - 48])
                    {
                        for (auto l: mapping[digits[3] - 48]) 
                        {
                            string s;
                            s = i;
                            s += j;
                            s += k;
                            s += l;
                            ans.push_back(s);
                        }
                    }
                    
                }
            }
        }
        return ans;
    }
};