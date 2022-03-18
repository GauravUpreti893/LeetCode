class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN,b = INT_MIN,c = INT_MIN,x = INT_MAX,y = INT_MAX;
        for (auto i:nums)
        {
            if (i > a)
            {
                c = b;
                b = a;
                a = i;
            }
            else if (i > b)
            {
                c = b;
                b = i;
            }
            else if (i > c)
            {
                c = i;
            }
            if (i < x)
            {
                y = x;
                x = i;
            }
            else if (i < y)
            {
                y = i;
            }
        }
        int ans;
        if (a > 0)
        {
            ans = max(b*c,x*y);
        }
        else
        {
            ans = min(b*c,x*y);
        }
        return a*ans;
    }
};