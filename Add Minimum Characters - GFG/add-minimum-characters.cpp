//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int n = str.size();
        vector<int> lcs(2*n + 1);
        string s = str;
        reverse(s.begin(), s.end());
        str += "$" + s;
        int len = 0;
        for (int i = 1; i < 2*n + 1; i++)
        {
            if (str[i] == str[len])
            {
                len++;
                lcs[i] = len;
            }
            else
            {
                if (len)
                {
                    len = lcs[len - 1];
                    i--;
                }
                else
                {
                    lcs[i] = 0;
                }
            }
        }
        return n - lcs[2*n];
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends