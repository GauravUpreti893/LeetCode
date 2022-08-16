class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++; // Finding frequency of each alphabet.
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'a'] == 1)
                return i; // Because it's frequency is 1, so it is non repeating character.
        }
        return -1; // If there is no character with frequency 1, so no unique characters in string.
    }
};