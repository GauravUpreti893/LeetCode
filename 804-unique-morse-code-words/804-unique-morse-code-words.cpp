class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCode[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        int n = words.size();
        int m;
        for (int i = 0; i < n; i++)
        {
            m = words[i].size();
            string s;
            for (int j = 0; j < m; j++)
            {
                s += morseCode[words[i][j] - 'a'];
            }
            st.insert(s);
        }
        return st.size();
    }
};