class Solution {
public:
    bool isPowerOfFour(int n) {
        int r;
        if (n == 0)
            return false;
        while (n != 1)
        {
            r = n % 4;
            if (r)
                return false;
            n /= 4;
        }
        return true;
    }
};