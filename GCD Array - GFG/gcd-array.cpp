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
    int solve(int N, int K, vector<int> &arr) {
        // code here
        vector<int> factors;
        int sum = 0, ans = 1;
        for (int i = 0; i < N; i++)
        sum += arr[i];
        for (int i = 1; i <= sqrt(sum); i++)
        {
            if ((sum % i) == 0)
            {
                factors.push_back(i);
                if (i != (sum / i))
                factors.push_back(sum/i);
            }
        }
        int n = factors.size();
        for (int j = n - 1; j >= 0; j--)
        {
            int gcd = factors[j];
            sum = 0;
            int k = 0;
            for (int i = 0; i < N; i++)
            {
                sum += arr[i];
                if ((sum % gcd) == 0)
                {
                    k++;
                    sum = 0;
                    if (k == K)
                    {
                        i++;
                        while (i < N)
                        {
                            sum += arr[i];
                            i++;
                        }
                        if (sum % gcd == 0)
                        {
                            ans = max(ans, gcd);
                        }
                        break;
                    }
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends