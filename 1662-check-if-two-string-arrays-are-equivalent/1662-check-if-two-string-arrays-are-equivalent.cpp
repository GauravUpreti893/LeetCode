class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size(), m = word2.size(), n1 = word1[0].size(), m1 = word2[0].size() ;
        int i = 0, j = 0, i1 = 0, j1 = 0;
        while (i < n && j < m)
        {
            while (i1 < n1 && j1 < m1)
            {
                if (word1[i][i1] != word2[j][j1])
                    return false;
                i1++;
                j1++;
            }
            if (i1 == n1)
            {
                i++;
                i1 = 0;
                if (i != n)
                    n1 = word1[i].size();
            }
            if (j1 == m1)
            {
                j++;
                j1 = 0;
                if (j != m)
                    m1 = word2[j].size();
            }
            
        }
        if (i == n && j == m)
        return true;
        return false;
    }
};