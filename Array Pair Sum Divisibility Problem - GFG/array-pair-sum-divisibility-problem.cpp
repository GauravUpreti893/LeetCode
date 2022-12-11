//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if (n % 2)
        return false;
        vector<int> freq(k, 0);
        for (int i = 0; i < n; i++)
        {
            nums[i] %= k;
            freq[nums[i]]++;
        }
        if (freq[0] % 2)
        return false;
        int i = 1, j = k - 1;
        while (i < j)
        {
            if (freq[i] != freq[j])
            return false;
            i++;
            j--;
        }
        if (i == j && freq[i] % 2)
        return false;
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends