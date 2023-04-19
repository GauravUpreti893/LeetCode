//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        vector<int> freq(N, 0);
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '1')
            {
                if (i - X >= 0)
                {
                    freq[i - X]++;
                }
                else
                {
                    freq[0]++;
                }
                if (i + X + 1< N)
                freq[i + X + 1]--;
            }
        }
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += freq[i];
            if (!sum)
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends