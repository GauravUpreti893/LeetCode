//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int> ans;
        long long x = 0, y = 0, XOR = 0, sbit = 1, a = 1;
        for (long long i = 0; i < N; i++)
        {
            XOR = XOR^Arr[i];
        }
        // cout<<(XOR&a)<<endl;
        while (XOR && ((XOR & a) == 0))
        {
            // cout<<XOR<<endl;
            sbit <<= 1;
            XOR >>= 1;
        }
        // cout<<sbit<<endl;
        for (long long i = 0; i < N; i++)
        {
            if (Arr[i]&sbit)
            {
                x = x^Arr[i];
            }
            else
            y = y^Arr[i];
        }
        ans.push_back(max(x, y));
        ans.push_back(min(x,y));
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
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends