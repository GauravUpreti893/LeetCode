class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1, mid;
        while (lo < hi)
        {
            mid = (lo + hi)/2;
            if (nums[mid] > nums[hi])
                lo = mid + 1;
            else 
                hi = mid;
        }
        int sp = lo;
        if (sp != 0 && target >= nums[0] && target <= nums[sp - 1])
        {
            lo = 0;
            hi = sp - 1;
        }
        else
        {
            lo = sp;
            hi = n - 1;   
        }
        while (lo <= hi)
            {
                mid = (lo + hi)/2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            return -1;
    }
};