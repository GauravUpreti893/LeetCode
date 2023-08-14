//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n = nums.size();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        x = x ^ nums[i];
        int set = 0;
        for (int i = 0; i < 20; i++)
        {
            if (x & (1<<i))
            {
                set = 1<<i;
                break;
            }
        }
        x = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] & set)
            x = x ^ nums[i];
            else
            y = y ^ nums[i];
        }
        if (x > y)
        swap(x, y);
        return {x, y};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends