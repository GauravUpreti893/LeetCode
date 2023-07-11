//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int sti = 0, endi = n - 1, stj = 0, endj = m - 1;
 		while (sti <= endi && stj <= endj)
 		{
 		    for (int i = stj; i <= endj; i++)
 		    {
 		        k--;
 		        if (!k)
 		        return a[sti][i];
 		    }
 		    sti++;
 		    for (int i = sti; i <= endi; i++)
 		    {
 		        k--;
 		        if (!k)
 		        return a[i][endj];
 		    }
 		    endj--;
 		    for (int i = endj; i >= stj; i--)
 		    {
 		        k--;
 		        if (!k)
 		        return a[endi][i];
 		    }
 		    endi--;
 		    for (int i = endi; i >= sti; i--)
 		    {
 		        k--;
 		        if (!k)
 		        return a[i][stj];
 		    }
 		    stj++;
 		}
 		return -1;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends