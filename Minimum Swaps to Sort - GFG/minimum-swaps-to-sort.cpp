//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    vector<int> arr = nums;
	    sort(arr.begin(), arr.end());
	    int ans = 0;
	    unordered_map<int, int> mp;
	    for (int i = 0; i < n; i++)
	    {
	        mp[nums[i]] = i;
	    }
	    int idx;
	    for (int i = 0; i < n; i++)
	    {
	        if (nums[i] != arr[i])
	        {
	            idx = mp[arr[i]];
	            swap(nums[i], nums[idx]);
	            swap(mp[nums[i]], mp[nums[idx]]);
	            ans++;
	        }
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
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends