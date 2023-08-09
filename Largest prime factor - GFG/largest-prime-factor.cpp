//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        int size = sqrt(N);
        int mx = 1;
        for (int i = 1; i <= size; i++)
        {
            if ((N % i) == 0)
            {
                int j = N/i;
                bool flag = true;
                int sq = sqrt(j);
                for (int k = 2; k <= sq; k++)
                {
                    if (j % k == 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                return j;
                j = i;
                flag = true;
                sq = sqrt(j);
                for (int k = 2; k <= sq; k++)
                {
                    if (j % k == 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                mx = i;
            }
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends