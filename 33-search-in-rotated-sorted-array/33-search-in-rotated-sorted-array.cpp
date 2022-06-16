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
        lo = 0;
        hi = n - 1;
        // if (sp != 0 && target >= nums[0] && target <= nums[sp - 1])
        // {
        //     lo = 0;
        //     hi = sp - 1;
        // }
        // else
        // {
        //     lo = sp;
        //     hi = n - 1;   
        // }
        int amid;
        while (lo <= hi)
            {
                mid = (lo + hi)/2;
                amid = (mid + sp)%n;
                // cout<<mid<<endl;
                if (nums[amid] == target)
                    return amid;
                else if (nums[amid] > target)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            return -1;
    }
};