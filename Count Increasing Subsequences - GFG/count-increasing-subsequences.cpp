//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    unsigned long long int countSub(int arr[], int n)
    {
        // Your code goes here
        vector<unsigned long long> freq(10, 0);
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
            for (int j = 0; j < arr[i]; j++)
            {
                freq[arr[i]] += freq[j];
            }
        }
        unsigned long long ans = 0;
        for (int i = 0; i < 10; i++)
        ans += freq[i];
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
        int n;
        cin>>n;
        int a[n+1];
        for(unsigned long long int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.countSub(a,n)<<endl;
    }
}

// } Driver Code Ends