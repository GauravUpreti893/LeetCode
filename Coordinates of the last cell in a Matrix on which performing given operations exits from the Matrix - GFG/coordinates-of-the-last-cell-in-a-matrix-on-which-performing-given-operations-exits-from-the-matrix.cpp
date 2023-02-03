//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        int n = matrix.size(), m = matrix[0].size();
        unordered_map<string, pair<string, int>> mp;
        int direc = 1;  
        // 0 = up
        // 1 = right
        // 2 = down
        // 3 = left
        int i = 0, j = 0;
        while (true)
        {
            pair<int, int> p = {i, j};
            if (matrix[i][j])
            {
                matrix[i][j] = 0;
                if (direc == 0)
                {
                    direc = 1;
                    j++;
                }
                else if (direc == 1)
                {
                    direc = 2;
                    i++;
                }
                else if (direc == 2)
                {
                    direc = 3;
                    j--;
                }
                else
                {
                    direc = 0;
                    i--;
                }
            }
            else
            {
                if (direc == 0)
                {
                    i--;
                }
                else if (direc == 1)
                {
                    j++;
                }
                else if (direc == 2)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            if (i < 0 || j < 0 || i == n || j == m)
            return p;
        }
    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends