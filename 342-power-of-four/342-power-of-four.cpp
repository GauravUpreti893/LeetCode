class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        int log = logb(n);
        log /= 2;
        if (ceil(pow(4,log)) == n)
            return true;
        else
            return false;
    }
};