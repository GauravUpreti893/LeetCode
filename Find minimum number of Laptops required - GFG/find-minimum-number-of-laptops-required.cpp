//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        vector<pair<int, int>> arr(N);
        for (int i = 0; i < N; i++)
        {
            arr[i] = {start[i], end[i]};
        }
        sort(arr.begin(), arr.end());
        // for (int i = 0; i < N; i++)
        // {
        //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
        // }
        int ans = 1, count = 1;
        priority_queue<int, vector<int>, greater<int>> pq; 
        pq.push(arr[0].second);
        for (int j = 1; j < N; j++)
        {
            while (!pq.empty() && pq.top() <= arr[j].first)
            {
                pq.pop();
                count--;
            }
            count++;
            pq.push(arr[j].second);
            ans = max(ans, count);
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
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends