// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixmul(int n, int *arr, vector<vector<int>> &table, int i, int j)
    {
        if (table[i][j] != INT_MAX/3)
        return table[i][j];
        for (int k = i; k < j; k++)
        {
            table[i][j] = min(table[i][j],matrixmul(n,arr,table,i,k) +  matrixmul(n,arr,table,k + 1,j) + arr[i - 1]*arr[k]*arr[j]);
        }
        return table[i][j];
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> table(N, vector<int> (N,INT_MAX/3));
        for (int i = 1; i < N; i++)
        {
            table[i][i] = 0;
        }
        return matrixmul(N,arr, table,1, N - 1);
        
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