//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku.
    vector<vector<bool>> row, col, box;
    bool ispossible(int grid[N][N], int i, int j)
    {
        if (j == 9)
        {
            i++;
            if (i == 9)
            return true;
            j = 0;
        }
        if (grid[i][j])
        {
            return ispossible(grid, i, j + 1);
        }
        for (int k = 1; k <= 9; k++)
        {
            if (!row[i][k] && !col[j][k] && !box[(i/3) * 3 + j/3][k])
            {
                row[i][k] = 1;
                col[j][k] = 1;
                box[(i/3) * 3 + j/3][k] = 1;
                grid[i][j] = k;
                if (ispossible(grid, i, j + 1))
                return true;
                row[i][k] = 0;
                col[j][k] = 0;
                box[(i/3) * 3 + j/3][k] = 0;
                grid[i][j] = 0;
            }
        }
        return false;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        row = vector<vector<bool>> (9, vector<bool> (10, 0));
        col = vector<vector<bool>> (9, vector<bool> (10, 0));
        box = vector<vector<bool>> (9, vector<bool> (10, 0));
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                row[i][grid[i][j]] = 1;
                col[j][grid[i][j]] = 1;
                box[(i/3) * 3 + j/3][grid[i][j]] = 1;
            }
        }
        return ispossible(grid, 0, 0);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            cout<<grid[i][j]<<" ";
        }
        return;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends