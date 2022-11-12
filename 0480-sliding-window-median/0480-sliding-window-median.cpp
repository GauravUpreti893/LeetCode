class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<double> ans(n - k + 1);
        priority_queue<long long> left;
        priority_queue<long long, vector<long long >, greater<long long>> right;
        int a, b;
        left.push(nums[0]);
        for (int i = 1; i < k; i++)
        {
            a = left.size();
            b = right.size();
            if (a == b)
            {
                if (nums[i] > right.top())
                {
                    left.push(right.top());
                    right.pop();
                    right.push(nums[i]);
                }
                else
                {
                    left.push(nums[i]);
                }
            }
            else
            {
                if (nums[i] < left.top())
                {
                    right.push(left.top());
                    left.pop();
                    left.push(nums[i]);
                }
                else
                {
                    right.push(nums[i]);
                }
            }
        }
        if (left.size() == right.size())
        {
            ans[0] = (left.top() + right.top())/2.0;
        } 
        else
        {
            ans[0] = left.top();
        }
        unordered_map<int, int> freq;
        int l = left.size(), r = right.size();
        for (int i = k; i < n; i++)
        {
            freq[nums[i - k]]++;
            if (l == r)
            {
                if (nums[i - k] <= left.top())
                {
                    left.push(right.top());
                    right.pop();
                }
                r--;
            }
            else
            {
                if (nums[i - k] > left.top())
                {
                    right.push(left.top());
                    left.pop();
                }
                l--;
            }
            while (!left.empty() && freq[left.top()])
            {
                freq[left.top()]--;
                left.pop();
            }
            while (!right.empty() && freq[right.top()])
            {
                freq[right.top()]--;
                right.pop();
            }
            if (l == r)
            {
                if (l == 0)
                {
                    left.push(nums[i]);
                }
                else if (nums[i] > right.top())
                {
                    left.push(right.top());
                    right.pop();
                    right.push(nums[i]);
                }
                else
                {
                    left.push(nums[i]);
                }
                l++;
            }
            else
            {
                if (nums[i] < left.top())
                {
                    right.push(left.top());
                    left.pop();
                    left.push(nums[i]);
                }
                else
                {
                    right.push(nums[i]);
                }
                r++;
            }
            while (!left.empty() && freq[left.top()])
            {
                freq[left.top()]--;
                left.pop();
            }
            while (!right.empty() && freq[right.top()])
            {
                freq[right.top()]--;
                right.pop();
            }
            if (l == r)
            {
                if (l)
                ans[i - k + 1] = (left.top() + right.top())/2.0;
                else
                    ans[i - k + 1] = 0;
            }
            else
                ans[i - k + 1] = left.top();
        }
        return ans;
    }
};