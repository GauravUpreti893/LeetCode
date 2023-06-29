//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isHappy(int N, unordered_map<int, bool> &mp){
        // code here
        int sum = 0;
        while (N)
        {
            int r = N % 10;
            sum += r*r;
            N /= 10;
        }
        if (sum == 1)
        return 1;
        if (mp.find(sum) != mp.end())
        return 0;
        mp[sum] = 1;
        return isHappy(sum, mp);
    }
    int nextHappy(int N){
        // code here
        while (1)
        {
            N++;
            unordered_map<int, bool> mp;
            if (isHappy(N, mp))
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