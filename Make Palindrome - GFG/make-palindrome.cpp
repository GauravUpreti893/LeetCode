//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string str = arr[i];
            reverse(str.begin(), str.end());
            if (mp.find(str) != mp.end())
            {
                mp.erase(str);
            }
            else
            {
                mp[arr[i]] = 1;
            }
        }
        if (mp.size() == 0)
        return true;
        if (mp.size() == 1)
        {
            string s = (mp.begin())->first;
            int i = 0, j = s.size() - 1;
            while (i < j)
            {
                if (s[i++] != s[j--])
                return false;
            }
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends