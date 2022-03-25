class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j1 = n-1;
        vector<int> ans1(n,0);
        for (int i = 1; i < n;i+=2)
        {
            ans1[i] = nums[j1];
            j1--;
        }
        for (int i = 0; i < n;i+=2)
        {
            ans1[i] = nums[j1];
            j1--;
        }
        nums = ans1;
    }
};