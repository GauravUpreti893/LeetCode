//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int  find_and(int l, int r ) 
    {
        // Code here.
        int ans = 0;
        for (int i = 31; i >= 0; i--)
        {
            if ((l & (1<<i))  && (r & (1<<i)))
            ans |= (1<<i);
            else if (((l & (1<<i))  || (r & (1<<i))))
            return ans;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int  l, r;
    	cin >> l >> r;
    	Solution ob;
    	int ans = ob.find_and(l, r);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends