//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Node{
    public:
    Node* links[2];
};
class Trie{
    Node* root;
    public:
    Trie()
    {
        root = new Node();
    }
    void insert(int n){
        Node* curr = root;
        for (int i = 19; i >= 0; i--)
        {
            int idx = ((n & (1<<i)) != 0);
            if (!curr->links[idx])
            curr->links[idx] = new Node();
            curr = curr->links[idx];
        }
    }
    int find(int n)
    {
        int no = 0;
        Node* curr = root;
        for (int i = 19; i >= 0; i--)
        {
            int idx = ((n & (1<<i)) != 0);
            if (!curr->links[idx])
            curr = curr->links[!idx];
            else
            {
                curr = curr->links[idx];
                no |= (1<<i);
            }
        }
        insert(~n);
        return no;
    }
};
class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        //code here
        Trie tri;
        tri.insert(arr[0]);
        int ans = 0;
        for (int i = 1; i < n; i++)
        ans = max(ans, tri.find(~arr[i]));
        return ans;
    }
    
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}



// } Driver Code Ends