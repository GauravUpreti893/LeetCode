//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        // code here 
        if (S == 1 || D == 1 || S >= 9*D)
        return "-1";
        string ans;
        for (int i = 0; i < D; i++)
        {
            ans += "0";
        }
        ans[0] = '1';
        S--;
        if (S < 9)
        {
            ans[D - 1] += (S - 1);
            ans[D - 2]++;
            return ans;
        }
        for (int i = D - 1; i >= 0; i--)
        {
            if (S >= 9)
            {
                ans[i] = '9';
                S -= 9;
            }
            else
            {
                ans[i + 1] = '8';
                S++;
                ans[i] += S;
                return ans;
            }
        }
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
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends