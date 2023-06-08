//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
vector<int> fact(10, -1);
bool flag = true;
int factorial(int n)
{
    if (fact[n] != -1)
    return fact[n];
    return fact[n] = n * factorial(n - 1);
}
class Solution
{
public:
set<int> st;
    string ans;
    int N;
    void permut(int k)
    {
        int n = ans.size();
        if (n == N)
        return;
        int size = fact[N - n - 1];
        int idx = k / size;
        auto it = st.begin();
        for (int i = 0; i < idx; i++)
        {
            it++;
        }
        char c = *it + '0';
        ans += c;
        st.erase(it);
        k %= size;
        permut(k);
    }
    string kthPermutation(int n, int k)
    {
        // code here
       if (flag)
        {
            flag = false;
            fact[0] = 1;
            factorial(9);
        }
        for (int i = 1; i <= n; i++)
        st.insert(i);
        N = n;
        permut(k - 1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends