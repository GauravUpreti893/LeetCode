class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        int mid;
        while (lo < n - 1 && (nums[lo] == nums[lo + 1]))
        {
            lo++;
        }
        if (lo == n - 1)
        {
            if (nums[lo] == target)
                return true;
            else
                return false;
        }
        while (hi > lo && (nums[hi] == nums[hi - 1]))
        {
            hi--;
        }
        
        if (nums[lo] == nums[hi])
        {
            hi--;
        }
        n = hi + 1;
        // cout<<n<<endl;
        // cout<<lo<<" "<<hi<<endl;
        int sp = lo;
        
        while (lo < hi)
        {
            mid = (lo + hi)/2;
            if (nums[mid] > nums[n - 1])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }
        sp = lo;
        if (sp != 0 && (target >= nums[0]) && (target <= nums[sp - 1]))
        {
            lo = 0;
            hi = sp - 1;
        }
        else
        {
            lo = sp;
            hi = n - 1;
        }
        // cout<<sp<<" "<<lo<<" "<<hi<<endl;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (nums[mid] == target)
                return true;
            else if (nums[mid] > target)
            {
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return false;
    }
};