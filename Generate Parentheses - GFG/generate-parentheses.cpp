//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void generate(int n, int o, int c, string s, vector<string> &ans)
    {
        if (o == n)
        {
            for (int i = c; i < n; i++)
            {
                s += ')';
            }
            ans.push_back(s);
            return;
        }
        if (o < n)
        {
            generate(n, o + 1, c, s + "(", ans);
        }
        if (c < o)
        {
            generate(n, o, c + 1, s + ")", ans);
        }
        return;
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        generate(n, 0, 0, "", ans);
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends