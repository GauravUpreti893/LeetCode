//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int p1 = -1, p2 = -1, sum = 0, res = -1e5;
	    vector<int> ans;
	    int i = 0;
	    while (i < n && a[i] < 0)
	    {
	        i++;
	    }
	    if (i == n)
	    {
	        ans.push_back(-1);
	        return ans;
	    }
	    int st = i;
	    for (; i < n; i++)
	    {
	        if (a[i] < 0)
	        {
	           if (sum > res)
	           {
	               res = sum;
	               p1 = st;
	               p2 = i - 1;
	           }
	           else if (sum == res && (i - st) > (p2 - p1))
	           {
	               p1 = st;
	               p2 = i - 1;
	           }
	           while (i < n && a[i] < 0)
	           {
	               i++;
	           }
	           sum = 0;
	           st = i;
	           i--;
	        }
	        else
	        sum += a[i];
	    }
	    if (sum > res)
       {
           res = sum;
           p1 = st;
           p2 = n - 1;
       }
       else if (sum == res && (i - st) > (p2 - p1))
       {
           p1 = st;
           p2 = n - 1;
       }
	    for (i = p1; i <= p2; i++)
	    {
	        ans.push_back(a[i]);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends