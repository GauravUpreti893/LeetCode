//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    unordered_map<string, bool> mp;
    public:
    bool isScramble(string& S1, string& S2){
        //code here
        if (S1 == S2)
        return true;
        string str = S1 + " " + S2;
        if (mp.find(str) != mp.end())
        return false;
        int n = S1.size();
        for (int i = 1; i < n; i++)
        {
            string x = S1.substr(0, i), y = S2.substr(0, i), z = S1.substr(i, n - i), w = S2.substr(i, n - i), u = S2.substr(n - i, i), a = S2.substr(0, n - i);
            if (isScramble(x, y) && isScramble(z, w))
            return true;
            if ((isScramble(x, u)) && (isScramble(z, a)))
            return true;
        }
        return mp[str] = false;
    }    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends