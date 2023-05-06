//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool ispossible(vector<int> &coins, vector<vector<bool>> &dp, int k, int target)
    {
        if (!target && !k)
        return true;
        if (!k || target <= 0)
        return false;
        if (dp[k][target] != 1)
        return 0;
        int n = coins.size();
        for (int i = 0; i < n; i++)
        {
            if (ispossible(coins, dp, k - 1, target - coins[i]))
            return true;
        }
        return dp[k][target] = 0;
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        vector<vector<bool>> dp(K + 1, vector<bool> (target + 1, 1));
        return ispossible(coins, dp, K, target);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends