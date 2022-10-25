class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s;
        int n = word1.size();
        for (int i = 0; i < n; i++)
            s += word1[i];
        n = word2.size();
        string s1;
        for (int i = 0; i < n; i++)
            s1 += word2[i];
        if (s1.compare(s) == 0)
            return true;
        else
        return false;
    }
};