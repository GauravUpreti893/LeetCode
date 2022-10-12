class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum;
        for (int i = n - 1; i > 1; i--)
        {
            sum = nums[i - 1] + nums[i - 2]; 
            if (nums[i] < sum)
            {
                return sum + nums[i];
            }
        }
        return 0;
    }
};