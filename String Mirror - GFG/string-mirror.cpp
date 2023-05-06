//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        int n = str.size();
        string ans;
        ans += str[0];
        if (n > 1)
        {
            if (str[1] == str[0])
            {
                ans += str[1];
                return ans;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (str[i] <= str[i - 1])
            {
                ans += str[i];
            }
            else
            break;
        }
        str = ans;
        reverse(str.begin(), str.end());
        return ans + str;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends