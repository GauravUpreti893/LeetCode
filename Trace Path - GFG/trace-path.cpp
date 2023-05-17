//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
        int sum = 0, left = 0;
        int N = s.size();
        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'L')
            {
                sum++;
            }
            else if (s[i] == 'R')
            {
                sum--;
            }
            left = max(left, sum);
            if (sum < 0)
            sum = 0;
        }
        sum = 0;
        int right = 0;
        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'R')
            {
                sum++;
            }
            else if (s[i] == 'L')
            {
                sum--;
            }
            right = max(right, sum);
            if (sum < 0)
            sum = 0;
        }
        int up = 0, sum1 = 0, down = 0;
        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'U')
            {
                sum1++;
            }
            else if (s[i] == 'D')
            {
                sum1--;
            }
            up = max(up, sum1);
            if (sum1 < 0)
            sum1 = 0;
        }
        sum1 = 0;
        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'D')
            {
                sum1++;
            }
            else if (s[i] == 'U')
            {
                sum1--;
            }
            down = max(down, sum1);
            if (sum1 < 0)
            sum1 = 0;
        }
        if (right < m  && left < m && down < n && up < n)
        {
            return true;
        }
        // if (right >= left  && right < m && down < n && down >= up)
        // {
        //     return true;
        // }
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends