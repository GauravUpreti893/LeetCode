// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool compare(Item a, Item b)
{
    return a.value/(a.weight/1.0) > b.value/(b.weight/1.0);
}
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double ans = 0;
        int cw = 0,diff;
        sort(arr,arr + n,compare);
        for (int i = 0; i < n; i++)
        {
            if (cw + arr[i].weight <= W)
            {
                ans += arr[i].value;
                cw += arr[i].weight;
                if (cw == W)
                {
                    break;
                }
            }
            else
            {
               diff = W - cw;
               ans += diff*arr[i].value/(arr[i].weight/1.0);
               break;
            }
        }
        return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends