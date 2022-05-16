class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
            // cout<<nums[i]<<" "<<(i + 1)<<endl;
            if (nums[i] != (i + 1))
            {
                
                while (nums[i] != (i + 1))
                {
                    int val = nums[i];
                    if ( (nums[i] > n) || (nums[i] <= 0) || (nums[nums[i] - 1] == nums[i]))
                        break;
                    else
                        swap(nums[nums[i] - 1],nums[i]);
                    // cout<<"jgksdf";
                }
            }
        }
        int i1 = 0;
        while (i1 < n && nums[i1] <= 0)
        {
            i1++;
        }
        // cout<<i1<<endl;
        int j = 1;
        for (int i = i1; i < n;i++)
        {
            // cout<<nums[i]<<" "<<j<<endl;
            if (nums[i] == j)
            {
                j++;
            }
            else
                return j;
        }
        return max(mx + 1,1);
    }
};