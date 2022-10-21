class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        multiset<int> st;
        for (int i = 0; i <= min(indexDiff, n - 1); i++)
        {
            st.insert(nums[i]);
        }
        multiset<int> :: iterator it = st.begin();
        int prev = *it;
        it++;
        for (; it != st.end(); ++it)
        {
            if ((*it - prev) <= valueDiff)
            {
                return true;
            }
            prev = *it;
        }
        
        for (int i = indexDiff + 1; i < n; i++)
        {
            st.erase(st.find(nums[i - indexDiff - 1]));
            auto itr = st.lower_bound(nums[i]);
            if (itr == st.end())
            {
                if (itr != st.begin())
                itr--;
                if (abs(nums[i] - *itr) <= valueDiff)
                {
                    return true;
                }
                st.insert(nums[i]);
                continue;  
            }
            if ((*itr - nums[i]) <= valueDiff)
            {
                return true;
            }
            if (itr != st.begin())
            itr--;
            if (abs(nums[i] - *itr) <= valueDiff)
            {
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};