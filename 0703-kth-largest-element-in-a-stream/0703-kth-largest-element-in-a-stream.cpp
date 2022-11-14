class KthLargest {
public:
    multiset<int, greater<int>> st;
    multiset<int, greater<int>> :: iterator it;
    int size, K;
    KthLargest(int k, vector<int>& nums) {
        int n = nums.size();
        size = min(n, k);
        K = k;
        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }
        if (n != 0)
        it = st.begin();
        for (int i = 0; i < size - 1; i++)
        {
            it++;
        }
    }
    
    int add(int val) {
        st.insert(val);
        if (size != K)
        {
            if (size)
            {
                if (*it >= val)
                {
                    it++;
                }
            }
            else
                it = st.begin();
            size++;
            return *it;
        }
        if (val > *it)
        {
            it = --it;
        }
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */