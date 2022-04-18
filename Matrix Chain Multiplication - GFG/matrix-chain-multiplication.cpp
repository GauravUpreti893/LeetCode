// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> table(N, vector<int> (N,INT_MAX/3));
        for (int i = 1; i < N; i++)
        {
            table[i][i] = 0;
        }
        // for (int i = 0; i <= N; i++)
        // {
        //     for (int j = 0; j <= N;j++)
        //     {
        //         cout<<table[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for (int i = 1; i < N; i++)
        {
            for (int j = 1; j < N - i; j++)
            {
                for (int k = j; k < j + i; k++)
                {
                    table[j][j + i] = min(table[j][j + i],table[j][k] + table[k + 1][j + i] + arr[j - 1]*arr[k]*arr[j + i]);
                }
            }
            
        }
        
        // for (int i = 0; i <= N; i++)
        // {
        //     for (int j = 0; j <= N;j++)
        //     {
        //         cout<<table[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return table[1][N - 1];
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends