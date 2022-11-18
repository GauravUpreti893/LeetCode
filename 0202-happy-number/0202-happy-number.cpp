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
        int slow = n, fast = n;
        fast = next(fast);
        fast = next(fast);
        if (fast == 1)
            return true;
        while (fast != slow)
        {
            slow = next(slow);
            fast = next(fast);
            fast = next(fast);
            if (fast == 1)
                return true;
        }
        return false;
    }
};