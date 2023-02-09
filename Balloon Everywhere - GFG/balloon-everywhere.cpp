//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int n = s.size();
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }
        return min({freq[1], freq[0], freq['l' - 'a']/2, freq['o' - 'a']/2, freq['n' - 'a']});
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends