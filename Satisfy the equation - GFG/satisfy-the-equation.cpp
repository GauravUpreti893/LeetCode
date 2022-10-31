//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int A[], int N) {
        // code here
        unordered_map<int, pair<int, int>> mp;
        int sum;
        vector<int> ans;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                sum = A[i] + A[j];
                if (mp.find(sum) != mp.end())
                {
                    int a = mp[sum].first, b = mp[sum].second;
                    if (a == i || a == j || b == i || b == j)
                    continue;
                    vector<int> v{a, b, i, j};
                    if (!ans.size() || ans > v)
                    {
                        ans = v;
                    }
                }
                else
                {
                    mp[sum] = {i, j};
                }
            }
        }
        if (ans.size() == 0)
        {
            ans = vector<int>(4, -1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends