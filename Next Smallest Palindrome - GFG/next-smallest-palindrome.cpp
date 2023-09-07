//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    vector<int> ans(n);
	    int size = ceil(n/2.0);
	    for (int i = 0; i < size; i++)
	    {
	        ans[i] = num[i];
	        ans[n - 1 - i] = num[i];
	    }
	    for (int i = n/2; i < n; i++)
	    {
	        if (ans[i] < num[i])
	        {
	            break;
	        }
	        else if (ans[i] > num[i])
	        return ans;
	    }
	    int m = ceil(n/2.0) - 1, i = m;
	    while (i >= 0)
	    {
	        if (ans[i] != 9)
	        {
	            ans[i]++;
	            if (i != n - 1- i)
	            ans[n - 1 - i]++;
	            for (int j = i + 1; j <= m; j++)
	            {
	                ans[j] = 0;
	                ans[n - 1- j] = 0;
	            }
	            return ans;
	        }
	        i--;
	    }
	    ans.push_back(1);
	    ans[0] = 1;
	    for (int i = 1; i < n; i++)
	    ans[i] = 0;
	    return ans;
	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends