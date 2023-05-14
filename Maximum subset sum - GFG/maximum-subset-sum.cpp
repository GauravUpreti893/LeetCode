//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long find(vector<int> &arr, vector<vector<long long>> &dp, int i, bool taken)
    {
        int n = arr.size();
        if (i == n)
        return 0;
        if (dp[i][taken] != -1)
        return dp[i][taken];
        if (taken)
        {
            return dp[i][taken] = max(find(arr, dp, i + 1, 0), arr[i] + find(arr, dp, i + 1, 1));
        }
        return dp[i][taken] = arr[i] + find(arr, dp, i + 1, 1);
    }
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        vector<vector<long long>> dp(N, vector<long long> (2, -1));
        return find(A, dp, 0, 1);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends