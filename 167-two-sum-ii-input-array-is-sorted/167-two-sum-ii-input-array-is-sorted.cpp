class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo = 0, hi = numbers.size() - 1, sum;
        vector<int> ans(2);
        while (lo < hi)
        {
            sum = numbers[lo] + numbers[hi];
            if (sum == target)
            {
                ans[0] = lo + 1;
                ans[1] = hi + 1;
                return ans;
            }
            else if (sum > target)
            {
                hi--;
            }
            else
            {
                lo++;
            }
        }
        return ans;
    }
};