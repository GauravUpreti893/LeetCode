//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string> ans;
    void permut(string &s, int idx)
    {
        int n = s.size();
        if (idx == n)
        {
            ans.push_back(s);
            return;
        }
        for (int i = idx; i < n; i++)
        {
            swap(s[i], s[idx]);
            permut(s, idx + 1);
            swap(s[i], s[idx]);
        }
        return;
    }
    vector<string> permutation(string S)
    {
        //Your code here
        permut(S, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends