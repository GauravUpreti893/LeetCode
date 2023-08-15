//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int sum = 0, ans = 0, st = 0, end = -1, j = -1;
        for (int i = 0; i < n; i++)
        {
            if (!a[i])
            sum++;
            else
            {
                if (sum > ans)
                {
                    ans = sum;
                    st = j;
                    end = i - 1;
                }
                sum--;
                if (sum < 0)
                {
                    sum = 0;
                    j = i + 1;
                }
            }
        }
        if (sum > ans)
        {
            ans = sum;
            st = j;
            end = n - 1;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i >= st && i <= end)
            {
                count += (a[i] == 0);
            }
            else
            count += (a[i] == 1);
        }
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends