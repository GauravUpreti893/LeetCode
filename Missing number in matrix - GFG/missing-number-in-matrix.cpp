//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size(), idx;
        long long sum = 0, s = 0, s1 = 0, x, ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    idx = i;
                    int row = 0;
                    if (!i)
                    {
                        row = 1;
                    }
                    for (int k = 0; k < n; k++)
                    {
                        x = matrix[row][k];
                        sum += x;
                        x = matrix[i][k];
                        s += x;
                    }
                    if (sum - s < 1)
                    {
                        return -1;
                    }
                    ans = sum - s;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            s = 0;
            s1 = 0;
            for (int j = 0; j < n; j++)
            {
                s += matrix[i][j];
                if (matrix[i][j] == 0)
                s += ans;
                s1 += matrix[j][i];
                if (matrix[j][i] == 0)
                s1 += ans;
            }
            if (sum != s)
            return -1;
            if (sum != s1)
            return -1;
        }
        s = 0;
        for (int i = 0; i < n; i++)
        {
            s += matrix[i][i];
            if (matrix[i][i] == 0)
            s += ans;
        }
        if (sum != s)
        return -1;
        s = 0;
        for (int i = 0; i < n; i++)
        {
            s += matrix[i][n - i - 1];
            if (matrix[i][n - i - 1] == 0)
            s += ans;
        }
        if (sum != s)
        return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends