//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int  find_and(int left, int right ) 
    {
        // Code here.
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if ((left & (1<<i)) != (right & (1 << i)))
            {
                break;
            }
            if (left & (1<<i))
            ans += 1<<i;
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