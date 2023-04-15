//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
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
    long long solve(int n, vector<int> &A, vector<int> &B) {
        // code here
        long long sum = 0;
        vector<int> odd, even;
        sort(A.begin(), A.end());   
        sort(B.begin(), B.end());
        for (int i = 0; i < n; i++)
        {
            sum += A[i] - B[i];
            if (B[i] % 2 )
            odd.push_back(B[i]);
            else
            even.push_back(B[i]);
        }
        if (sum)
        return -1;
        int o = 0, e = 0, olen = odd.size(), elen = even.size();
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2)
            {
                if (o == olen)
                return -1;
                ans += abs(A[i] - odd[o++])/2;
            }
            else
            {
                if (e == elen)
                return -1;
                ans += abs(A[i] - even[e++])/2;
            }
        }
        return ans/2;
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
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends