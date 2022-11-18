class Solution {
public:
    int next(int n)
    {
        int x = 0, r;
        while (n)
        {
            r = n%10;
            x += r*r;
            n /= 10;
        }
        return x;
    }
    bool isHappy(int n) {
        unordered_map<int, int> mp;
        int x = n;
        while (1)
        {
            x = next(x);
            if (x == 1)
                return true;
            if (mp[x])
                return false;
            mp[x] = 1;
        }
        return false;
    }
};