//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int longestincreasing(vector<int> &nums, vector<int> &increasing, int idx)
	{
	   // cout<<idx<<endl;
	    if (increasing[idx] != -1)
	    return increasing[idx];
	    int ans = 0;
	    for (int i = 0; i < idx; i++)
	    {
	       int res = longestincreasing(nums, increasing, i);
	       if (nums[idx] > nums[i])
	       {
	           ans = max(ans, res);
	       }
	    }
	    return increasing[idx] = ans + 1;
	}
	int longestdecreasing(vector<int> &nums, vector<int> &decreasing, int idx)
	{
	    if (decreasing[idx] != -1)
	    return decreasing[idx];
	    int ans = 0, n = nums.size();
	    for (int i = idx + 1; i < n; i++)
	    {
	        int res = longestdecreasing(nums, decreasing, i);
	        if (nums[idx] > nums[i])
	        {
	            ans = max(ans, res);
	        }
	    }
	    return decreasing[idx] = ans + 1;
	}
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    int n = nums.size();
	    vector<int> increasing(n, -1), decreasing(n, -1);
	    increasing[0] = 1;
	    decreasing[n - 1] = 1;
	    longestincreasing(nums, increasing, n - 1);
	    longestdecreasing(nums, decreasing, 0);
	    int ans = 0;
	    for (int i = 0; i < n; i++)
	    {
	       // cout<<increasing[i]<<" "<<decreasing[i]<<endl;
	        ans = max(ans, increasing[i] + decreasing[i] - 1);
	    }
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
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends