//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		for (int j = 0; j < N; j++)
		{
		    int i = 0, k = j;
		    while (k >= 0)
		    {
		        ans.push_back(A[i][k]);
		        i++;
		        k--;
		    }
		}
		for (int i = 1; i < N; i++)
		{
		    int j = N - 1, k = i;
		    while (k < N)
		    {
		        ans.push_back(A[k][j]);
		       k++;
		       j--;
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends