class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int m = target.size(), j = 0;
        for (int i = 0; i < n; i++)
        {
            if (target[j] == (i + 1))
            {
                j++;
                v.push_back("Push");
                if (j == m)
                    break;
            }
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};