//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution{
  public:
  
    vector<string> generateCode(int n)
    {
         //Your code here
        int size = pow(2, n);
        vector<string> ans(size);
        for (int i = 0; i < size; i++)
        {
            int v = i ^ (i >> 1), r;
            string s;
            char c;
            while (v)
            {
                r = v & 1;
                c = r + '0';
                s = c + s;
                v = v >> 1;
            }
            int m = s.size();
            for (int i = m; i < n; i++)
            {
                s = '0' + s;
            }
            ans[i] = s;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends