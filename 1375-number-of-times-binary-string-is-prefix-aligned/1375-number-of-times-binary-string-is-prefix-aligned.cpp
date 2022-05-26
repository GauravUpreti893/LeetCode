class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int count = 0;
        set<int> s;
        int n = flips.size();
        for(int i = 0; i < n; i++)
        {
            s.insert(flips[i]);
            int mx = *s.rbegin();
            if (mx == i + 1)
            {
                count++;
            }
        }
        return count;
        
        }
};