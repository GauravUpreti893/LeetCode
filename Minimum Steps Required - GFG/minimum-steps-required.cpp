//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int n = str.size(), i = 0;
    int ans = 0, ans1 = 0;
    bool flag = false, flag1 = false;
    while (i < n && str[i] == 'b')
    i++;
    if (i)
    {
        flag = true;
    }
    while (i < n)
    {
        if (str[i] == 'b')
        {
            ans++;
            flag = true;
            while (i < n && str[i] == 'b')
            i++;
        }
        i++;
    }
    if (str[n - 1] == 'a')
    ans++;
    if (flag)
    ans++;
    i = 0;
    while (i < n && str[i] == 'a')
    i++;
    if (i)
    flag1 = true;
    while (i < n)
    {
        if (str[i] == 'a')
        {
            ans1++;
            flag1 = true;
            while (i < n && str[i] == 'a')
            i++;
        }
        i++;
    }
    if (str[n - 1] == 'b')
    ans1++;
    if (flag1)
    ans1++;
    return min(ans, ans1);
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends