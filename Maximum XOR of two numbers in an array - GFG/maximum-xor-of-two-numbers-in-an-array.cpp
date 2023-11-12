//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Node{
public:
    Node* links[2];
    bool flag = false;
};
class Trie{
public:
    Node* root;
    Trie()
    {
        root = new Node();
    }
    void insert(int n)
    {
        Node* curr = root;
        for (int i = 30; i >= 0; i--)
        {
            int val = ((n & (1<<i)) != 0);
            if (curr->links[val] != NULL)
            {
                curr = curr->links[val];
            }
            else
            {
                Node* n = new Node();
                curr->links[val] = n;
                curr = n;
            }
        }
        curr->flag = true;
        return;
    }
    int find(int n)
    {
        Node* curr = root;
        int no = 0;
        for (int i = 30; i >= 0; i--)
        {
            int val = ((n & (1<<i)) != 0);
            if (curr->links[val] == NULL)
            {
               val = !val;
            }
            if (val)
            {
                no += 1<<i;
            }
            curr = curr->links[val];
        }
        return no;
    }
};
class Solution
{
    public:
    int max_xor(int nums[] , int n)
    {
        //code here
       Trie tri;
       tri.insert(nums[0]);
       int ans = 0;
       for (int i = 1; i < n; i++)
       {
           ans = max(ans, nums[i] ^ tri.find(~nums[i]));
           tri.insert(nums[i]);
       }
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