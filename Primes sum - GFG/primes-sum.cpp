//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        // code here
        for (int i = 2; i <= N/2; i++)
        {
            bool flag = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i %j == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                int m = N - i;
                bool flag1 = true;
                for (int j = 2; j <= sqrt(m); j++)
                {
                    if (m %j == 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    return "Yes";
                }
            }
        }
        return "No";
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
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends