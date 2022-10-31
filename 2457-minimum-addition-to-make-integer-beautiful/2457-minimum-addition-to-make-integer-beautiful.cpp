class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        string ans;
        string nums = to_string(n);
        int m = nums.size();
        int v;
        int val = 0;
        for (int i = 0; i < m; i++)
        {
            val += nums[i] - 48;
        }
        int carry = 0;
        bool flag = 0;
        for (int i = m - 1; i >= 0; i--)
        {
            v = nums[i] - '0' + carry;
            if (val <= target)
            {
                flag = 1;
                break;
            }
            if (v == 0)
            {
                ans = '0' + ans;
                continue;
            }
            int diff = 10 - v;
            val -= v;
            char c = diff + '0';
            ans = c + ans;
            carry = 1;
            
            val++;
        }
        // if (flag == 0)
        // {
        //     ans = '1' + ans;
        // }
        long long sum = 0;
        int n1 = ans.size();
        for (int i = 0; i < n1; i++)
        {
            sum = sum*10 + ans[i] - 48;
        }
        return sum;
    }
};