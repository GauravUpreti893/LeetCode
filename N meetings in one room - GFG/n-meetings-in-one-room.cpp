// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

 bool compare(pair<int,int> a,pair<int,int> b)
    {
        if (a.second < b.second)
        return true;
        else if (a.second == b.second && a.first < b.first)
        {
            return true;
        }
        else
        return false;
    }
class Solution
{
   public:
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end(),compare);
        int last = -1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first > last)
            {
                ans++;
                last = v[i].second;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //   cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends