//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string S, int N)
    {
        // your code here
        vector<int> a(26, 0), b(26, 0);
        int n = 0, m = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                a[S[i] - 'a']++;
                n++;
            }
            else
            {
                b[S[i] - 'a']++;
                m++;
            }
        }
        int i = 0, j = 0;
        while (i < 26 && !a[i])
        i++;
        while (j < 26 && !b[j])
        j++;
        if (n == m)
        {
            if (j < i)
            {
                swap(a, b);
                swap(j, i);
            }
        }
        else if (n - m == 1)
        {}
        else if (m - n == 1)
        {
            swap(a, b);
            swap(j, i);
        }
        else
        return "-1";
        int size = N;
        if (size % 2)
        size--;
        for (int k = 0; k < size; k++)
        {
            S[k] = i + 'a';
            k++;
            S[k] = j + 'a';
            a[i]--;
            b[j]--;
            while (!a[i])
            {
                i++;
            }
            while (!b[j])
            {
                j++;
            }
        }
        if (N%2)
        S[N - 1] = i + 'a';
        return S;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends