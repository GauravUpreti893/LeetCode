//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    pair<long long, long long> mindif(vector<long long> &prefix, int st, int end)
    {
        int lo = st, hi = end;
        int mid = lo + (hi - lo)/2;
        long long x = prefix[mid + 1] - prefix[lo];
        long long y = prefix[hi + 1] - prefix[mid + 1];
        long long mn = min(x, y);
        long long mx = max(x, y);
        while (lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            long long x = prefix[mid + 1] - prefix[st];
            long long y = prefix[end + 1] - prefix[mid + 1];
            long long mnx = min(x, y);
            long long mxx = max(x, y);
            if ((mxx - mnx) < (mx - mn))
            {
                mx = mxx;
                mn = mnx;
            }
            else if (x > y)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return {mn, mx};
    }
    long long minDifference(int N, vector<int> &A) {
        // code here
        vector<long long> prefix(N + 1);
        prefix[0] = 0;
        for (int i = 1; i <= N; i++)
        {
            prefix[i] = prefix[i - 1] + A[i - 1];
        }
        long long ans = prefix[N];
        for (int i = 1; i < N - 2; i++)
        {
            pair<long long, long long> left = mindif(prefix, 0, i);
            pair<long long, long long> right = mindif(prefix, i + 1, N - 1);
            long long mn = min(left.first, right.first);
            long long mx = max(left.second, right.second);
            ans = min(ans, mx - mn);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        long long ans = ob.minDifference(N, A);
        cout<<ans<<endl;
    }
    return 0;
} 
// } Driver Code Ends