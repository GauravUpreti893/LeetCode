//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes here
	     int n = s.size(), i = 0;
        vector<int> lis(n, 0);
        for (int j = 1; j < n; j++)
        {
            if (s[j] == s[i])
            {
                lis[j] = ++i;
            }
            else
            {
                if (i)
                {
                    i = lis[i - 1];
                    j--;
                }
            }
        }
        if (lis[n - 1] == 0 || n % (n - lis[n - 1]))
        return false;
        return true;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends