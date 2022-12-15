//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        // code here
        string ans;
        int i, j;
        string atoz;
        for (int i = 0; i < 26; i++)
        atoz += ('a' + i);
        int t = N;
        while (N > 26)
        {
            N -= 26;
            ans += atoz;
        }
        if (N%2)
        {
            int sofd = 0;
            while (t)
            {
                sofd += t % 10;
                t /= 10;
            }
            if (sofd % 2)
            {
                i = (N - 1)/2;
                j = 26 - (N + 1)/2;
            }
            else
            {
                i = (N + 1)/2;
                j = 26 - (N - 1)/2;
            }
        }
        else
        {
            i = N/2;
            j = 26 - N/2;
        }
        int k = 0;
        while (k < i)
        {
            ans += ('a' + k);
            k++;
        }
        while (j < 26)
        {
            ans += ('a' + j);
            j++;
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
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends