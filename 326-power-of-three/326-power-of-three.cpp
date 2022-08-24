class Solution {
public:
    bool isPowerOfThree(int n) {
        int p = ceil(pow(3, 19));
        return n > 0 && p % n == 0;
    }
};