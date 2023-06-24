//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        int ans = 0;
        int m = str.size();
        if (k > m)
        return 0;
        for (int i = 0; i < n; i++)
        {
            int m = arr[i].size();
            if (k > m)
            continue;
            bool flag = true;
            for (int j = 0; j < k; j++)
            {
                if (str[j] != arr[i][j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            ans++;
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
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends