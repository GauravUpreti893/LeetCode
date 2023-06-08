//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	map<string, bool> mp;
	void permut(string& s, int idx)
	{
	    int n = s.size();
	    if (idx == n)
	    {
	        mp[s] = 1;
	        return;
	    }
	    char c = s[idx];
	    for (int i = idx; i < n; i++)
	    {
	        swap(s[idx], s[i]);
	        permut(s, idx + 1);
	        swap(s[idx], s[i]);
	    }
	    return;
	}
	vector<string>find_permutation(string& S)
	{
	    // Code here there
	    permut(S, 0);
	    vector<string> ans;
	    for (auto it = mp.begin(); it != mp.end(); it++)
	    {
	        ans.push_back(it->first);
	    }
	    return ans;
	}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends