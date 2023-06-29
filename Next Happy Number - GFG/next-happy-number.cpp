//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isHappy(int N){
        // code here
        int sum = 0;
        if (N < 10)
        {
            if (N == 1 || N == 7)
            return 1;
            return 0;
        }
        while (N)
        {
            int r = N % 10;
            sum += r*r;
            N /= 10;
        }
        if (sum == 1)
        return 1;
        return isHappy(sum);
    }
    int nextHappy(int N){
        // code here
        while (1)
        {
            N++;
            if (isHappy(N))
            return N;
        }
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends