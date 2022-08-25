class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq1(26, 0), freq2(26, 0);
        int n = ransomNote.size(), m = magazine.size();
        if (n > m)
            return false;
        for (int i = 0; i < m; i++)
        {
            freq1[magazine[i] - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            freq2[ransomNote[i] - 'a']++;
            if (freq2[ransomNote[i] - 'a'] > freq1[ransomNote[i] - 'a'])
                return false;
        }
        return true;
    }
};