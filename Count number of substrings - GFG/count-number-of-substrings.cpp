//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int count(string s, int k)
    {
        int n = s.size(), unique = 0, st = 0;
        long long ans = 0;
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            if (!freq[s[i] - 'a'])
            unique++;
            freq[s[i] - 'a']++;
            while (unique > k)
            {
                freq[s[st] - 'a']--;
                if (!freq[s[st++] - 'a'])
                {
                    unique--;
                    break;
                }
            }
            ans += i - st + 1;
        }
        return ans;
    }
    long long int substrCount (string s, int k) {
    	//code here.
    	return count(s, k) - count(s, k - 1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends