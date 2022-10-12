class Solution {
public:
    int climbStairs(int n) {
        int p1 = 1, p2 = 1, sum;
        for (int i = 2; i <= n; i++)
        {
            sum = p1 + p2;
            p2 = p1;
            p1 = sum;
        }
        return p1;
    }
};