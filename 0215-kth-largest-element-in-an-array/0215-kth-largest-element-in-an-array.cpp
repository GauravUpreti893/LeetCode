class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> freq(20001, 0);
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            freq[nums[i] + 10000]++;
        }
        for (int i = 20000; i >= 0; i--)
        {
            k -= freq[i];
            if (k <= 0)
                return i - 10000;
        }
        return 0;
    }
};