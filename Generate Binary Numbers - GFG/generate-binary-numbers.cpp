// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	vector<string> ans(N);
	for (int i = 1; i <= N; i++)
	{
	    string s;
	    char c;
	    int j = i;
	    while (j != 0)
	    {
	        c = j % 2 +  48;
	        s = c + s;
	        j /= 2;
	    }
	    ans[i - 1] = s;
	}
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends