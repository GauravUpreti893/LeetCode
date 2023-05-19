//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        sort(range.begin(), range.end());
        vector<int> ans(q, -1);
        for (int j = 0; j < q; j++)
        {
            int k = queries[j];
            int last = 0;
            for (int i = 0; i < n; i++)
            {
                int x = max(range[i][0], last + 1);
                if (x <= range[i][1])
                {
                    int diff = range[i][1] - x + 1;
                    if (diff < k)
                    {
                        k -= diff;
                    }
                    else
                    {
                        ans[j] = x + k - 1;
                        break;
                    }
                    last = range[i][1];
                }
            }
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends