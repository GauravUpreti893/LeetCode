//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> coins{2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        vector<int> freq(10, 0);
        int d;
        int i = 0;
        while (N)
        {
            d = N / coins[i];
            freq[i] = d;
            N = N % coins[i];
            i++;
        }
        vector<int> ans;
        for (int i = 0; i < 10; i++)
        {
            while (freq[i])
            {
                ans.push_back(coins[i]);
                freq[i]--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends