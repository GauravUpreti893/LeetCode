class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return;
        int i = 1;
        int j;
        if ((n - 1)%2 == 0)
        {
            j = n - 1;
        }
        else
            j = n - 2;
        auto mid = nums.begin() + (n - 1) / 2;
        nth_element(nums.begin(),mid,nums.end());
        int median = *mid;
        for (int k = 0; k < n; k++)
        {
            if (nums[k] > median)
            {
                if (k <= i && k&1)
                {
                    continue;
                }
                swap(nums[i],nums[k]);
                k--;
                i += 2;
            }
            else if (nums[k] < median)
            {
                if (k >= j && (k&1) == 0)
                {
                    continue;
                }
                swap(nums[j],nums[k]);
                j -=2;
                k--;
            }
        }
    }
};