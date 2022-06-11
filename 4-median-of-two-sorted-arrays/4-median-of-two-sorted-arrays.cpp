class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int lo = -1000000;
        int hi =  1000000,mid,val;
        double ans;
        if ((n + m)%2)
        {
            int med = (n + m)/2;
            while (lo <= hi)
            {
                mid = (lo + hi)/2;
                auto it = upper_bound(nums1.begin(),nums1.end(),mid);
                val = it - nums1.begin();
                it = upper_bound(nums2.begin(),nums2.end(),mid);
                val += it - nums2.begin();
                // cout<<val<<" ";
                if (val <= med)
                {
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
                // cout<<lo<<" "<<hi<<endl;
            }
            
            ans = lo;
        }
        else
        {
            int med1 = (n + m)/2;
            int med2 = med1 - 1;
            while (lo <= hi)
            {
                mid = (lo + hi)/2;
                auto it = upper_bound(nums1.begin(),nums1.end(),mid);
                val = it - nums1.begin();
                it = upper_bound(nums2.begin(),nums2.end(),mid);
                val += it - nums2.begin();
                if (val <= med1)
                {
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }
            int ans1 = lo;
            mid = 0;
            lo = -1000000;
            hi = 1000000;
            while (lo <= hi)
            {
                mid = (lo + hi)/2;
                auto it = upper_bound(nums1.begin(),nums1.end(),mid);
                val = it - nums1.begin();
                it = upper_bound(nums2.begin(),nums2.end(),mid);
                val += it - nums2.begin();
                if (val <= med2)
                {
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }
            int ans2 = lo;
            ans = (ans1 + ans2)/2.0;
            // cout<<ans1<<" "<<ans2<<endl;
            
        }
        return ans;
    }
};